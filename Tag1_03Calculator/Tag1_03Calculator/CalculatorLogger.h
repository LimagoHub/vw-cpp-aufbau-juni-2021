#pragma once
#include <iostream>

#include "CalculatorImpl.h"
namespace vw {
	namespace math
	{
		class CalculatorLogger :
			public vw::math::Calculator
		{
		private:
			Calculator& calculator_;
		public:
			CalculatorLogger(Calculator & calculator):calculator_(calculator){}
			
			double add(double a, double b) const noexcept  override
			{
				std::cout << "Add wurde gerufen" << std::endl;
				return calculator_.add(a,b);
			}

			double sub(double a, const double b) const noexcept  override
			{
				return a - b;
			}
		};

	}
}