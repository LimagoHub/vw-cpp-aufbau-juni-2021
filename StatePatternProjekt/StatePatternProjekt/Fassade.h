#pragma once

#include "status.h"


class fassade
{
	status* myStateA;
	status* myStateB;
	status* current;
public:
	

	fassade();


	

	virtual void drucken() const;
	virtual void wechsle_zu_a();
	virtual void wechsle_zu_b();

	friend class status_a;
	friend class status_b;
};
