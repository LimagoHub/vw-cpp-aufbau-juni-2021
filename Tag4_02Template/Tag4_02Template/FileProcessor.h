#pragma once
#include <iostream>
#include <fstream>
#include <string>


class FileProcessor abstract
{
	

public:


	
	// Kernalgorithmus
	void run(std::string filename)
	{

		std::fstream fin(filename, std::ios::in);

		init();

		int ch;

		while (EOF != (ch = fin.get()))
		{
			process((char) ch);
		}

		dispose();
		
		fin.close();
	}

	virtual void init()
	{
		
	}

	virtual void dispose()
	{
		
	}

	virtual void process(char c) = 0;
	
};
