#pragma once
#include "abstract_status.h"
#include <iostream>





class status_a :
    public abstract_status
{
public:
	status_a(fassade * fassade): abstract_status(fassade){}

	void drucken() const override
	{
		std::cout << "Hier druckt a" << std::endl;
	}
	void wechsle_zu_b() override
	{
		get_fassade()->current = get_fassade()->myStateB  ;
	}
};

