
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

class Bauer{
public:

	void vermisst(Schwein & schwein)
	{
		std::cout << "Tschau " << schwein.get_name() << std::endl;
	}
	static void zaehlt_geld(Schwein& schwein)
	{
		std::cout << "Bin reich " << schwein.get_name() << std::endl;
	}

};


Metzger metzger;
Spediteur spediteur;
Bauer bauer;
	

void foo(Schwein& schwein){
	std::cout << "Demo " << schwein.get_name() << std::endl;
}

void bar()
{
	std::cout << "kein Schwein "  << std::endl;
}

auto ptr = [](Schwein& schwein)
{
	bar();
};

int main()
{


	
	
	
	
	Schwein piggy{"Miss Piggy"};
	

	piggy.add_pig_too_fat_listener([](Schwein& s) {metzger.schlachten(); });
	piggy.add_pig_too_fat_listener([](Schwein& s) {spediteur.fahren(s, 100); });
	piggy.add_pig_too_fat_listener([](Schwein& s) {bauer.vermisst(s); });
	piggy.add_pig_too_fat_listener(Bauer::zaehlt_geld);
	piggy.add_pig_too_fat_listener(foo);
	piggy.add_pig_too_fat_listener([](Schwein& s) {bar(); });
	piggy.add_pig_too_fat_listener(ptr);
	

	for(int i = 0; i < 11; i++)
	{
		piggy.fressen();
	}
	
	
    std::cout << "Hello World!\n";
}


