// Tag2_02Lamdas.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <functional>

int foo()
{
	return 42;
}


std::function<int()> demo()
{

	int x = 10;

	auto lamda3 = [&x]()->int {return x + 5; };

	x = 20;

	return lamda3;
	
}

int main()
{
	int x = 10;

	auto lamda3 = [x]()->int {return x + 5; };

	std::cout << lamda3() << "\n";
	
	x = 20;
	
	std::cout << lamda3() << "\n";
	
	
	/*std::function<int()> lamda1 = []()->int {return 42; };
	std::function<int()> myPtr = foo;

	auto lamda2 = [](double a, double b)->double {return a + b; };
	
	int ergebnis = myPtr();


	std::function<double(double, double)> myops[] = {
		lamda2,
		[](double a, double b)->double {return a - b; },
		[](double a, double b)->double {return a * b; }
	};

	
	
    std::cout << myops[1](5,7) << "\n"; */
}


