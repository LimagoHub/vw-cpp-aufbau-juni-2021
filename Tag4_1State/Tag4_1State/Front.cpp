
#include "Front.h"
#include "AState.h"
#include "BState.h"

front::Front::Front()
{
	STATE_A = new state::AState(this);
	STATE_B = new state::BState(this);
	current_ = STATE_A;
}

 front::Front::~Front()
{
}

 void front::Front::print()
{
	current_->print();
}

 void front::Front::change_to_a()
{
	 current_->change_to_a();
}

 void front::Front::change_to_b()
{
	 current_->change_to_b();
}