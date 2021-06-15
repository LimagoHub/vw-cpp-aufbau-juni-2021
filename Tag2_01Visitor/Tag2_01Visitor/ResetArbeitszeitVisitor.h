#pragma once
#include "LohnEmpfaenger.h"
#include "AbstractMitarbeiterVisitor.h"
class ResetArbeitszeitVisitor :
    public AbstractMitarbeiterVisitor
{
public:
	void visit(LohnEmpfaenger& lohn_empfaenger)  override
	{
		lohn_empfaenger.set_arbeitszeit(0);
	}
	
};

