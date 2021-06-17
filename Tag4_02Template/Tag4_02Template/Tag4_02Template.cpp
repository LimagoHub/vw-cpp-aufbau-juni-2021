// Tag4_02Template.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>


#include "CharacterCounter.h"
#include "FileProcessor.h"
#include "LineCounter.h"

int main()


{
	CharacterCounter cc;
	LineCounter lc;
	FileProcessor &file_processor = lc;

	file_processor.run("..\\..\\Tag3_06Templates\\blind.txt");

    std::cout << "\n\nHello World!\n";
}


