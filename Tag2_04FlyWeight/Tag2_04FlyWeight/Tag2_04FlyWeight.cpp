#include <iostream>

#include "AttributedCharacter.h"

int main()
{

	AttributedCharacter* a1 = AttributedCharacter::get_instance('A', false);
	AttributedCharacter* a2 = AttributedCharacter::get_instance('A', false);

	std::cout << (a1 == a2) << std::endl;
	AttributedCharacter* a3 = AttributedCharacter::get_instance('A', true);

	std::cout << (a1 == a3) << std::endl;
	
    std::cout << "Hello World!\n";


	
}

