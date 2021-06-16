// Tag2_3Singleton.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include "Logger.h"

int main()
{
	Logger &logger = Logger::get_instance();


	logger.log("Hallo");

	Logger &logger2 = Logger::get_instance();


	
	
    std::cout << "Hello World!\n";
}


