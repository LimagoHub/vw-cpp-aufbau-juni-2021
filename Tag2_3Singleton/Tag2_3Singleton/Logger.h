#pragma once
#include <iostream>
#include <ostream>
#include <string>

class Logger
{

public:
	~Logger()
	{
		std::cout << "DTOR" << std::endl;

	}
	
	static Logger* get_instance()
	{
		return &instance;
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

Logger  Logger::instance{};

