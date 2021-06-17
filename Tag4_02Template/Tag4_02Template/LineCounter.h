#pragma once
#include "FileProcessor.h"

class LineCounter :
	public FileProcessor
{
	int counter;
public:

	void init() override
	{
		counter = 0;
	}
	void dispose() override
	{
		std::cout << counter << std::endl;
	}
	void process(char c) override
	{
		if(c =='\n')
			counter++;
	}
};

