#pragma once
#include <iostream>

#include "Calculator.h"
namespace vw {
	namespace math
	{
		class CalculatorSecure :
			public vw::math::Calculator
		{
		private:
			Calculator& calculator_;
		public:
			CalculatorSecure(Calculator& calculator) :calculator_(calculator) {}

			double add(double a, double b) const noexcept  override
			{
				std::cout << "Du kommst hier rein" << std::endl;
				return calculator_.add(a, b);
			}

			double sub(double a, const double b) const noexcept  override
			{
				return a - b;
			}
		};

	}
}