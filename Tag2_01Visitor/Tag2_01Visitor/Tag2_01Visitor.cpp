#include <algorithm>
#include <iostream>
#include <vector>

#include "Schwein.h"

void fuettern(Schwein & schwein)
{
	schwein.fressen(2);
}

class GewichtAggregat
{
private:
	int gesamt_gewicht{ 0 };
public:
	void operator() (Schwein& schwein)
	{
		gesamt_gewicht += schwein.get_gewicht();
	}


	int get_gesamt_gewicht() const
	{
		return gesamt_gewicht;
	}
};

int main()
{
	Schwein s1("piggy");
	Schwein s2("babe");
	Schwein s3("rudi");
	
	std::vector<std::reference_wrapper<Schwein>> schweine{
		std::ref(s1),
		std::ref(s2),
		std::ref(s3)
	};

	for(auto item : schweine)
	{
		item.get().fressen();
	}

	GewichtAggregat a;

	a(s1);
	a(s2);

	a.get_gesamt_gewicht();

	
	std::for_each(schweine.begin(), schweine.end(), [](Schwein& schwein) {schwein.fressen(); });
	std::for_each(schweine.begin(), schweine.end(), fuettern);
	GewichtAggregat ag =std::for_each(schweine.begin(), schweine.end(), GewichtAggregat{});
	std::cout <<ag.get_gesamt_gewicht() << "\n";
	
	std::cout << s1.get_gewicht() << "\n";
	
	std::cout << "Hello World!\n";
}


