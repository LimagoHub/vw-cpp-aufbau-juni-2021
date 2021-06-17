#pragma once
#include "abstract_status.h"
#include <iostream>

#include "Fassade.h"

class status_b :
    public abstract_status
{
public:
	status_b(fassade * fassade) :abstract_status(fassade) {}


	void drucken() const override
	{
		std::cout << "Hier druckt b" << std::endl;
	}
	void wechsle_zu_a() override
	{

		get_fassade()->current = get_fassade()->myStateA;
	}
};

