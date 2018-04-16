/**
 * Mupen64 - recomp.h
 * Copyright (C) 2002 Hacktarux
 *
 * Mupen64 homepage: http://mupen64.emulation64.com
 * email address: hacktarux@yahoo.fr
 * 
 * If you want to contribute to the project please contact
 * me first (maybe someone is already making what you are
 * planning to do).
 *
 *
 * This program is free software; you can redistribute it and/
 * or modify it under the terms of the GNU General Public Li-
 * cence as published by the Free Software Foundation; either
 * version 2 of the Licence, or any later version.
 *
 * This program is distributed in the hope that it will be use-
 * ful, but WITHOUT ANY WARRANTY; without even the implied war-
 * ranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public Licence for more details.
 *
 * You should have received a copy of the GNU General Public
 * Licence along with this program; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139,
 * USA.
 *
**/

#ifndef RECOMP_H
#define RECOMP_H

typedef struct _precomp_instr
{
   union
     {
	struct
	  {
	     long long int *rs;
	     long long int *rt;
	     short immediate;
	  } i;
	struct
	  {
	     unsigned long inst_index;
	  } j;
	struct
	  {
	     long long int *rs;
	     long long int *rt;
	     long long int *rd;
	     unsigned char sa;
	     unsigned char nrd;
	  } r;
	struct
	  {
	     unsigned char base;
	     unsigned char ft;
	     short offset;
	  } lf;
	struct
	  {
	     unsigned char ft;
	     unsigned char fs;
	     unsigned char fd;
	  } cf;
     } f;
} precomp_instr;

void prefetch_opcode(unsigned long op);
#endif
