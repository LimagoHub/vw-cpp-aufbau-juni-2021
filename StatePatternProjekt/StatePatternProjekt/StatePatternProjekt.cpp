// StatePatternProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "abstract_status.h"

int main()
{
    fassade fassade;

	fassade.drucken();
	fassade.wechsle_zu_b();
	fassade.drucken();
	//fassade.wechsle_zu_b();
}
