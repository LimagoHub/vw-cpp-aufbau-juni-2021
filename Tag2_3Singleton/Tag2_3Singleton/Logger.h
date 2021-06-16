#pragma once
#include <iostream>
#include <ostream>
#include <string>

// Modulglobal altes private von c
static int x;
static void f()
{
	
}




class Logger
{

public:
	~Logger()
	{
		std::cout << "DTOR" << std::endl;

	}
	
	static Logger & get_instance() // KLassenmethode
	{
		static Logger  instance{};
		return instance;
	}

	virtual void log(std::string message) 
	{
		std::cout << message << std::endl;
	}

private:
	static Logger instance;
	Logger()
	{
		std::cout << "CTOR" << std::endl;
		
	}


};



