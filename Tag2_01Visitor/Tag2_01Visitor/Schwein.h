#pragma once


#include <ostream>
#include <string>

class Schwein
{
private:
	std::string name;
	int gewicht;

public:
	Schwein(std::string name = "nobody") :name(name), gewicht(10)
	{

		std::cout << "Ctor: " << name << std::endl;
	}


	std::string get_name() const
	{
		return name;
	}

	void set_name(const std::string& name)
	{
		this->name = name;
	}

	int get_gewicht() const
	{
		return gewicht;
	}

	

	void fressen(int anzahl_kartoffel = 1)
	{
		gewicht+=anzahl_kartoffel;
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
