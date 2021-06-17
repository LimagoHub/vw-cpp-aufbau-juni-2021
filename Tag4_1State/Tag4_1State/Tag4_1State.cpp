#include <iostream>

#include "Front.h"

int main()
{
	try
	{
		front::Front front;

		front.print();

		front.change_to_b();
		front.print();

		front.change_to_b();
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
    std::cout << "Hello World!\n";
}

