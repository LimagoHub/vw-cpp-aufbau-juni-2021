#pragma once

namespace state {
	class IState abstract
	{

	public:
		virtual void print() = 0;    // Business
		virtual void change_to_a() = 0; // Statuswechsel
		virtual void change_to_b() = 0; // Statuswechsel
	};

}