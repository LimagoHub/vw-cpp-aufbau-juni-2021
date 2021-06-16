
#include <iostream>

#include "Schwein.h"

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


class MetzgerSchweinAdapter: public PigTooFatListener
{
	Metzger& metzger;
public:
	MetzgerSchweinAdapter(Metzger & metzger):metzger(metzger){}
	void pig_too_fat(Schwein&) override
	{
		metzger.schlachten();
	}
};


class SpediteurSchweinAdapter : public PigTooFatListener
{
	Spediteur& spediteur_;
public:
	SpediteurSchweinAdapter(Spediteur& spediteur) :spediteur_(spediteur) {}
	void pig_too_fat(Schwein& s) override
	{
		spediteur_.fahren(s, 100);
	}
};

Metzger metzger;
Spediteur spediteur;

int main()
{
	
	Schwein piggy{"Miss Piggy"};
	MetzgerSchweinAdapter a1{ metzger };
	SpediteurSchweinAdapter a2{ spediteur };

	piggy.add_pig_too_fat_listener(&a1);
	piggy.add_pig_too_fat_listener(&a2);

	for(int i = 0; i < 11; i++)
	{
		piggy.fressen();
	}
	
	
    std::cout << "Hello World!\n";
}


