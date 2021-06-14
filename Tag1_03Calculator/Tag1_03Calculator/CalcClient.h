#pragma once
#include <iostream>

#include "Calculator.h"
namespace client {
	class CalcClient
	{


		
	private:
		vw::math::Calculator& calc_;
	public:

		CalcClient( vw::math::Calculator & calculator):calc_(calculator){}
		
		void run()
		{
			
			
			 std::cout << calc_.add(3, 4) << std::endl;
		}
	};
}
