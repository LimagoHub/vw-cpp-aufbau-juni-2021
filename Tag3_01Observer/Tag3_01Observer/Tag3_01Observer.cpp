
#include <iostream>
#include <string>


#include "Schwein.h"
#include <variant>

class Metzger
{
public:

	void schlachten() 
	{
		std::cout << "Messer wetz!\n";
	}
	
};



class Spediteur {
public:

	void fahren(Schwein& schwein, int kilometer) 
	{
		std::cout << "Wir fahren auf der Autobahn" << std::endl;
	}

};


Metzger metzger;
Spediteur spediteur;

	void foo() {}



int main()
{

	//auto ptr = [&d]() {d.foo(); };

	auto ptr = foo;
	
	ptr();

	
	
	
	
	Schwein piggy{"Miss Piggy"};
	

	piggy.add_pig_too_fat_listener([](Schwein& s) {metzger.schlachten(); });
	piggy.add_pig_too_fat_listener([](Schwein& s) {spediteur.fahren(s, 100); });
	

	for(int i = 0; i < 11; i++)
	{
		piggy.fressen();
	}
	
	
    std::cout << "Hello World!\n";
}


