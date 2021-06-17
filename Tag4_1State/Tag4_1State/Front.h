#pragma once
#include "IState.h"


namespace front {
	class Front
	{

		
	public:
		state::IState* STATE_A;
		state::IState* STATE_B;
		state::IState* current_;
		
		Front();
		
		virtual ~Front();

		void print();
		void change_to_a();
		void change_to_b();

		friend class AState;
		friend class BState;
	};

	
}
