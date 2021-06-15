#pragma once
#include <vector>

#include "AbstractMitarbeiter.h"
#include "MitarbeiterVisitor.h"


class Firma
{

private:
	std::vector < std::reference_wrapper<AbstractMitarbeiter>> mitarbeiters;

public:
	void add_mitarbeiter(AbstractMitarbeiter & mitarbeiter)
	{
		mitarbeiters.push_back(std::ref(mitarbeiter));
	}

	void iterate (MitarbeiterVisitor & visitor)
	{
		for( auto & m : mitarbeiters)
		{
			//visitor.visit(m);
			m.get().accept(visitor);
		}
	}
};
