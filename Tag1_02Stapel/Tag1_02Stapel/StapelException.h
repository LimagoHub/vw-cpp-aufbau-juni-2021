#pragma once
#include <exception>

class StapelException :
    public std::exception
{
public:
	StapelException() = default;

	explicit StapelException(char const* _Message)
		: exception(_Message)
	{
	}

	StapelException(char const* _Message, int i)
		: exception(_Message, i)
	{
	}

	explicit StapelException(exception const& _Other)
		: exception(_Other)
	{
	}
};

