/*
 * ctype.h - Standard C header file
 *
 * $Id: ctype.h,v 1.3 2005/08/13 15:07:11 boisy Exp $
 *
 * (C) 2005 The C^3 Compiler Project
 * http://www.nitros9.org/c3/
 *
 * Notes:
 *
 * Edt/Rev  YYYY/MM/DD  Modified by
 * Comment
 * ------------------------------------------------------------------
 *          2005/08/12  Boisy G. Pitre
 * Brought in from Carl Kreider's CLIB package.
 */

#ifndef _CTYPE_H
#define _CTYPE_H

extern const unsigned char     _chcodes[];	/* in chcodes.r */

#define _CONTROL       0x01
#define _UPPER         0x02
#define _LOWER         0x04
#define _DIGIT         0x08
#define _WHITE         0x10
#define _PUNCT         0x20
#define _HEXDIG        0x40

#define isascii(c)      ((unsigned)(c)<=0x7f)
#define isalpha(c)      (_chcodes[c]&(_UPPER|_LOWER))
#define isupper(c)      (_chcodes[c]&_UPPER)
#define islower(c)      (_chcodes[c]&_LOWER)
#define isdigit(c)      (_chcodes[c]&_DIGIT)
#define isxdigit(c)     (_chcodes[c]&_HEXDIG)
#define isspace(c)      (_chcodes[c]&_WHITE)
#define ispunct(c)      (_chcodes[c]&_PUNCT)
#define isalnum(c)      (_chcodes[c]&(_UPPER|_LOWER|_DIGIT))
#define isprint(c)      (_chcodes[c]&(_PUNCT|_UPPER|_LOWER|_DIGIT))
#define iscntrl(c)      (_chcodes[c]&_CONTROL)
#define _toupper(c)     ((c)&0xdf)
#define _tolower(c)     ((c)|0x20)
#define toascii(c)      ((c)&0x7f)

#endif				/* _CTYPE_H */
