// Tag3_02Speicher.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <climits>

class MyClass
{
public:
	MyClass()
	{
		std::cout << "CTOR" << std::endl;
	}
	~MyClass()
	{
		std::cout << "DTOR" << std::endl;
	}

	void foo()
	{
		std::cout << "FOO" << std::endl;
	}
};

auto get_data()->std::shared_ptr<char>
{
	return std::shared_ptr<char>{new char[10]};
	
}


auto main() -> int
{

	std::shared_ptr<char> data = get_data();

	
	std::shared_ptr<MyClass> myptr{ new MyClass };
	
	std::cout << myptr.use_count() << std::endl;

	std::shared_ptr<MyClass> myOtherPtr = myptr;
	std::cout << myptr.use_count() << std::endl;
	{
		std::shared_ptr<MyClass> ptr3 = myptr;
		std::cout << myptr.use_count() << std::endl;
	}
	
	std::cout << myptr.use_count() << std::endl;
	
	myptr->foo();
	
	std::cout << "Fertig" << std::endl;
	
}
