#pragma once

class GehaltsEmpfaenger;
class LohnEmpfaenger;

class MitarbeiterVisitor
{

public:
	virtual void visit(LohnEmpfaenger& lohn_empfaenger)   = 0;
	virtual void visit(GehaltsEmpfaenger& gehalts_empfaenger)  = 0;
	
};
