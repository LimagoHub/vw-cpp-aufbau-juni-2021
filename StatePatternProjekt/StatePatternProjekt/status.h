#pragma once
class status
{
public:
	// fachliche Methoden
	virtual void drucken() const = 0;

	// Statuswechselmethoden
	virtual void wechsle_zu_a()  = 0;
	virtual void wechsle_zu_b()  = 0;
};

