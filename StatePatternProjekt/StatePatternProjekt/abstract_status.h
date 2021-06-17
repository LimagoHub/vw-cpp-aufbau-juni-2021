
#pragma once
#include "Fassade.h"
#include "stdexcept"
#include "status.h"




class abstract_status :
    public status
{

private:
	fassade* fassade_;
public:
	
	explicit abstract_status(fassade* fassade) :fassade_(fassade) {}


	fassade* get_fassade() const
	{
		return fassade_;
	}

	void drucken() const override
	{
		throw std::runtime_error{ "Diese Methode macht in diesem Zustand keinen Sinn" };
	}
	void wechsle_zu_a() override
	{
		throw std::runtime_error{ "Diese Methode macht in diesem Zustand keinen Sinn" };
	}
	void wechsle_zu_b() override
	{
		throw std::runtime_error{ "Diese Methode macht in diesem Zustand keinen Sinn" };
	}
};

