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

auto get_my_class_as_pointer() -> std::unique_ptr<MyClass> // Source
{
	return std::unique_ptr<MyClass> { new MyClass };
}

auto do_something_with_my_class(std::unique_ptr<MyClass> ptr) // sink
{
	ptr->foo();
	std::cout << "END SINK" << std::endl;
	return ptr;
}


auto main() -> int
{
	std::unique_ptr<MyClass> myunique = get_my_class_as_pointer();

	myunique->foo();

	
	myunique = do_something_with_my_class(std::move(myunique));

	myunique->foo();
	
	std::cout << "END PROGRAMM" << std::endl;
}
