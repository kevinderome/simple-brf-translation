/*
Copyright (C) <2017> <derome> <kevin>
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#pragma once
#ifndef  BRF_CONVERTER_H_
#define  BRF_CONVERTER_H_

#include <map>
#include <string>
#include <fstream>

void translateBrf(std::string &str);
int    convertBrf(const std::string name);

typedef enum
{
	fr_mode,
	en_mode
} langMode;

std::map<char, int>     code = {
	{ ' ', ' ' },
	{ '-','-' },
	{ '\'','\'' },
	{ '/','/' },
	{ '!','è' },
	{ '"','´' },
	{ '#', '0' },
	{ '$','6' },
	{ '%', '3' },
	{ '&','ç' },
	{ '(','à' },
	{ ')','ù' },
	{ '*','1' },
	{ '+','ó' },
	{ ',','`' },
	{ '.','¨' },
	{ '0',')' },
	{ '1',',' },
	{ '2',';' },
	{ '3',':' },
	{ '4','.' },
	{ '5','?' },
	{ '6','!' },
	{ '7','\"' },
	{ '8','(' },
	{ '9','*' },
	{ ':','5' },
	{ ';', 132 /* = ''*/ },
	{ '<','2' },
	{ '=','é' },
	{ '>','@' },
	{ '?','4' },
	{ '@','^' },
	{ 'A','a' },
	{ 'B','b' },
	{ 'C','c' },
	{ 'D','d' },
	{ 'E','e' },
	{ 'F','f' },
	{ 'G','g' },
	{ 'H','h' },
	{ 'I','i' },
	{ 'J','j' },
	{ 'K','k' },
	{ 'L','l' },
	{ 'M','m' },
	{ 'N','n' },
	{ 'O','o' },
	{ 'P','p' },
	{ 'Q','q' },
	{ 'R','r' },
	{ 'S','s' },
	{ 'T','t' },
	{ 'U','u' },
	{ 'V','v' },
	{ 'W','w' },
	{ 'X','x' },
	{ 'Y','y' },
	{ 'Z','z' },
	{ '[','9' },
	{ '\\','8' },
	{ ']','7' },
	{ '^','¤' },
	{ '_','¸' }
};

#endif
