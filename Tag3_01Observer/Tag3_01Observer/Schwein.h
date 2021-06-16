
#include <ostream>
#include <vector>

#include "PigTooFatListener.h"
/*
 *	Informationen für Empfänger
 *  1. Wer meldet (Source)
 *  2. Daten  // Nicht in unserem Fall
 */



class Schwein
{
private:

	std::vector<PigTooFatListener *> pig_too_fat_listener; // Schritt 1 (Empfängerliste)
	
	std::string name;
	int gewicht;

	void set_gewicht(const int gewicht)
	{
		this->gewicht = gewicht;
		if (this->get_gewicht() > 20)
			fire_pig_too_fat_event(); // Schritt 3 event auslösen;
	}

	void fire_pig_too_fat_event()
	{

		for(auto it = pig_too_fat_listener.begin(); it != pig_too_fat_listener.end(); ++it)
		{
			(*it)->pig_too_fat(*this);
		}
		// for(auto fptr: pig_too_fat_listener)
		// {
		// 	fptr->pig_too_fat(*this);
		// }
	}

public:

	void add_pig_too_fat_listener(PigTooFatListener *listener) // Schritt 2 registrieren
	{
		pig_too_fat_listener.push_back(listener);
	}

	// void remove_pig_too_fat_listener(std::function<void(Schwein&)>   &listener)
	// {
	// 	// const auto position = std::find(pig_too_fat_listener.begin(), pig_too_fat_listener.end(), listener);
	// 	// if (position != pig_too_fat_listener.end())
	// 	// 	pig_too_fat_listener.erase(position);
	// }
	//

	Schwein(std::string name = "nobody") :name(name), gewicht(10) {}


	inline std::string get_name() const
	{
		return name;
	}

	inline void set_name(const std::string& name)
	{
		this->name = name;
	}

	inline int get_gewicht() const
	{
		return gewicht;
	}

	void fressen()
	{
		set_gewicht(get_gewicht() + 1);
	}

	

	Schwein& operator ++ ()
	{
		gewicht++;
		return *this;
	}
	Schwein operator ++ (int dummy) // Post increment
	{
		Schwein temp = *this;
		gewicht++;
		return temp;
	}
	friend std::ostream& operator<<(std::ostream& os, const Schwein& schwein)
	{
		os << "Name = " << schwein.get_name() << std::endl;
		os << "Gewicht = " << schwein.get_gewicht() << std::endl;

		return os;

	}
};

