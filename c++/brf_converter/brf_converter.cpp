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

#include "stdafx.h"
#include "brf_converter.h"
#include <iostream>

using namespace std;

static langMode    currLang = en_mode;



void    checkMode(const std::string &line)
{
	for (int i = 0; i < line.size(); ++i)
		if (line[i] == '¨' || (line[i] >= 'a' && line[i] <= 'z'))
		{
			currLang = fr_mode;
			break;
		}

}

void translateBrf(string &str)
{
	if (currLang == fr_mode)
		return;
	int size = str.size();

	for (int i = 0; i < size; i++)
		if (code[str[i]] != 0)
			str[i] = code[str[i]];
}

int    convertBrf(std::string name)
{
	ifstream    File(name.c_str(), ios::in);
	ofstream sortie((name+".txt").c_str(), ios::out | ios::trunc);
	string    tmp;

	if (!File || !sortie)
		return (-1);
	while (getline(File, tmp))
	{
		if (!tmp.empty())
		{
			checkMode(tmp);
			translateBrf(tmp);
		}
		sortie << tmp << endl;
	}
	sortie.close();
	File.close();
	return (0);
}


int    main(int ac, char **av)
{
	if (ac == 2)
	{
		if (convertBrf(av[1]) != 0)
		{
			std::cerr << "Error: Your file is maybe corupted..." << std::endl;
			return (-1);
		}
	}
		return (0);
	}
