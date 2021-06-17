#pragma once
#include <stdexcept>



#include "IState.h"

#include  "Front.h"


namespace state {

	class AbstractState : public IState
	{
		front::Front* front_;

	public:

		AbstractState(front::Front* front) :front_(front) {}


		front::Front* get_front()
		{
			return front_;
		}

		void print() override  // Business
		{
			throw std::logic_error("Diese Methode macht in diesem Zustand keinen Sinn.");
		}
		void change_to_a() override { // Statuswechsel
			throw std::logic_error("Diese Methode macht in diesem Zustand keinen Sinn.");
		}
		void change_to_b() override {
			throw std::logic_error("Diese Methode macht in diesem Zustand keinen Sinn.");
		}
	};
}