#pragma once
#include "MitarbeiterVisitor.h"
class AbstractMitarbeiterVisitor :
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

