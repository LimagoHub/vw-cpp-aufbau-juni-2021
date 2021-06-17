#include "Fassade.h"
#include "status_a.h"
#include "status_b.h"

fassade::fassade() 
{
	myStateA = new status_a(this);
	myStateB = new status_b(this);
	current = myStateA;

}



void fassade::drucken() const {
	current->drucken();
}
void fassade::wechsle_zu_a() {
	current->wechsle_zu_a();
}
void fassade::wechsle_zu_b() {
	current->wechsle_zu_b();
}