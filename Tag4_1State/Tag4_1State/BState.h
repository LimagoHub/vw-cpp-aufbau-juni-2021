#pragma once
#include <iostream>

#include "AbstractState.h"





namespace state {

	class BState :
		public AbstractState
	{
	public:

		BState(front::Front* front)
			: AbstractState(front)
		{
		}


		void print() override
		{
			std::cout << "Hier druckt b" << std::endl;
		}
		void change_to_a() override
		{
			get_front()->current_ = get_front()->STATE_A;
		}
	};

}