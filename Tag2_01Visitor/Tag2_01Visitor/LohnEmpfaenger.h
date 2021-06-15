#pragma once
#include <ostream>
#include "AbstractMitarbeiter.h"
#include "MitarbeiterVisitor.h"


class LohnEmpfaenger :
    public AbstractMitarbeiter
{
private:
	double stundenlohn;
	double arbeitszeit;

public:


	LohnEmpfaenger(const std::string& name, double stundenlohn=10, double arbeitszeit=10)
		: AbstractMitarbeiter(name),
		  stundenlohn(stundenlohn),
		  arbeitszeit(arbeitszeit)
	{
	}


	double get_stundenlohn() const
	{
		return stundenlohn;
	}

	void set_stundenlohn(const double stundenlohn)
	{
		this->stundenlohn = stundenlohn;
	}

	double get_arbeitszeit() const
	{
		return arbeitszeit;
	}

	void set_arbeitszeit(const double arbeitszeit)
	{
		this->arbeitszeit = arbeitszeit;
	}

	void accept(MitarbeiterVisitor& visitor)  override
	{
		visitor.visit(*this);
		
	}
	
	friend std::ostream& operator<<(std::ostream& os, const LohnEmpfaenger& obj)
	{
		return os
			<< "Lohnempfaenger: "
			<< static_cast<const AbstractMitarbeiter&>(obj)
			<< " stundenlohn: " << obj.stundenlohn
			<< " arbeitszeit: " << obj.arbeitszeit;
	}
};

