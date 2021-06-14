#pragma once
#include "Calculator.h"

class CalculatorFactory
{
	
public:
	static vw::math::Calculator &createCalculator();
};

