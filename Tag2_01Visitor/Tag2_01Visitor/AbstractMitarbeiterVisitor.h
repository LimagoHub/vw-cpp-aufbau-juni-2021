#pragma once
#include "MitarbeiterVisitor.h"
class AbstractMitarbeiterVisitor abstract :
    public MitarbeiterVisitor 
{
public:
	void visit(LohnEmpfaenger& lohn_empfaenger)  override
	{
		// Ok
	}
	void visit(GehaltsEmpfaenger& gehalts_empfaenger)  override
	{
		// Ok
	}

};

