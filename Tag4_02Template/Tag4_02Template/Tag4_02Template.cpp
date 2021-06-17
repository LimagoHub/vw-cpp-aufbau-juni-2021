// Tag4_02Template.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>

int main()
{
	std::fstream fin("C:\\Users\\JoachimWagner\\Documents\\blind.txt", std::ios::in);

	int ch;
	
	while(fin >> std::noskipws >> ch )
	{
		std::cout << ch << std::endl;
	}
	fin.close();
    std::cout << "Hello World!\n";
}


