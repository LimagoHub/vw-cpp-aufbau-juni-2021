#include <algorithm>
#include <iostream>
#include <vector>

#include "AbstractMitarbeiter.h"
#include "Firma.h"
#include "GehaltsEmpfaenger.h"
#include "LohnEmpfaenger.h"
#include "PrintVisitor.h"
#include "ResetArbeitszeitVisitor.h"


int main()
{

	
	GehaltsEmpfaenger g1("Schmidt", 2000);
	GehaltsEmpfaenger g2("Mueller", 1500);
	LohnEmpfaenger lohn1("Hinz", 20, 20);
	LohnEmpfaenger lohn2("Kunz", 15, 20);
	GehaltsEmpfaenger g3("Mayer", 1500);


	Firma firma;

	firma.add_mitarbeiter(g1);
	firma.add_mitarbeiter(g2);
	firma.add_mitarbeiter(lohn1);
	firma.add_mitarbeiter(lohn2);
	firma.add_mitarbeiter(g3);
	
	PrintVisitor p{};
	ResetArbeitszeitVisitor rav{};
	
	firma.iterate(p);
	std::cout << "-------------------------------\n";
	firma.iterate(rav);
	firma.iterate(p);
	
	std::cout << "Hello World!\n";
}


