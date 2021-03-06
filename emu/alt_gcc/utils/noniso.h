/*
    Copyright (C) 2016-2017 Alexey Dynda

    This file is part of AVR Simulator project.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _NONISO_H_
#define _NONISO_H_

char *utoa(unsigned int num, char *str, int radix);
char* itoa(int num, char* str, int base);
char *dtostrf (double val, signed char width, unsigned char prec, char *sout);

#define ltoa itoa
#define ultoa utoa

#endif /* _NONISO_H_ */
