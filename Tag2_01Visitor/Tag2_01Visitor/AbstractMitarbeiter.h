#pragma once
#include <ostream>
#include <string>

#include "MitarbeiterVisitor.h"


class AbstractMitarbeiter abstract
{
private:
	std::string name;

public:
	AbstractMitarbeiter(std::string name = "Fritz"){}


	void set_name(const std::string& name)
	{
		this->name = name;
	}


	std::string get_name() const
	{
		return name;
	}

	virtual void accept(MitarbeiterVisitor& visitor)  = 0;
	
	friend std::ostream& operator<<(std::ostream& os, const AbstractMitarbeiter& obj)
	{
		return os << "name: " << obj.name;
	}
};
