#pragma once
#include <iostream>

#include "AbstractState.h"


namespace state {
	class AState :
		public AbstractState
	{
	public:

		AState(front::Front* front)
			: AbstractState(front)
		{
		}


		void print() override
		{
			std::cout << "Hier druckt a" << std::endl;
		}
		void change_to_b() override
		{
			get_front()->current_ = get_front()->STATE_B;
		}
	};
}
