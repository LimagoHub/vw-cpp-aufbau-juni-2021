#pragma once

#include "Calculator.h"

namespace vw  {
	namespace math
	{


		class CalculatorImpl: public Calculator
		{
		public:
			double add(double a, double b)  const override
			
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(100));
				return a + b;
			}

			double sub(double a, const double b)  const override
			{
				return a - b;
			}

		};
	}
}