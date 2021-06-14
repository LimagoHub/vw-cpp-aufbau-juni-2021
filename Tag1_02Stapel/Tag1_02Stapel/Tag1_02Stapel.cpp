// Tag1_02Stapel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include "Stapel.h"

int main()
{

	//std::string s1 = "Ich bin ein ganz langer String";
	//std::string s2 = std::move(s1);

	//std::cout << s1 << std::endl;
	//std::cout << s2 << std::endl;

	
	

	Stapel s1;

	for(int i = 0; i < s1.get_size(); ++i)
	{
		s1.push(i);
	}

	//Stapel s2 = 20;
	//Stapel s2(20);
	//Stapel s2{ 20 };


	Stapel s2;
	s2 = std::move(s1);

	while (!s2.is_empty())
	{
		std::cout << s2.pop() << std::endl;
	}
	while (!s1.is_empty())
	{
		std::cout << s1.pop() << std::endl;
	}

	
 //   std::cout << "Hello World!\n";
}

