/* Interactive mode Bison.
   Copyright (C) 2006 Satya Kiran Popuri.

   This file is part of Interactive mode Bison, an extension of GNU Bison.

   Interactive mode Bison is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   Interactive mode Bison is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Bison; see the file COPYING.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */


/*
 * This file is part of Visual Bison project
 *
 * Lexer function definitions;
 */ 
#ifndef _Included_lexerH
#define _Included_lexerH

extern char *token_text;

int load_lexer(char *lib);	/* Load a lexer */
int set_lex_in(const char *path); /** Initialize yyin to a file input */
int call_lex(void); /** call yylex from dynamically loaded lexer */
void reset_lexer(char *path);
#endif

