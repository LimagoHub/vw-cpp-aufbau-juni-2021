#pragma once
#include <iostream>

#include "MitarbeiterVisitor.h"




class PrintVisitor : public MitarbeiterVisitor
{
public:
	void visit(LohnEmpfaenger& lohn_empfaenger)  override
	{
		std::cout << lohn_empfaenger << std::endl;
	}
	void visit(GehaltsEmpfaenger& gehalts_empfaenger)  override
	{
		std::cout << gehalts_empfaenger << std::endl;
	}
};
