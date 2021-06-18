#pragma once
#include "FileProcessor.h"

class FileCopierer :
	public FileProcessor
{
	std::fstream fout;
public:

	void init() override
	{
		fout.open("ausgabe.txt", std::ios::out);
	}
	void dispose() override
	{
		fout.close();
	}
	void process(char c) override
	{
		fout.put(c);
	}
};

