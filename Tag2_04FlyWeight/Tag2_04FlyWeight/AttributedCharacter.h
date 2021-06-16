#pragma once
#include <vector>

class AttributedCharacter
{

	static std::vector< AttributedCharacter *> characters;
	
	const char c;
	const bool bold;

	AttributedCharacter(const char c, const bool bold):c(c),bold(bold)
	{
		characters.push_back(this);
	}

	


public:
	AttributedCharacter(const AttributedCharacter& other) = delete;
	void operator = (const AttributedCharacter& other) = delete;
	virtual ~AttributedCharacter()
	{
		for (auto ac : characters)
			delete ac;
	}
	
	static AttributedCharacter * get_instance(const char c, const bool bold)
	{
		for(auto ac: characters)
		{
			if (ac->c == c && ac->bold == bold) return ac;

		}
		return new AttributedCharacter(c, bold);
	}

	char get_c() const
	{
		return c;
	}

	bool is_bold() const
	{
		return bold;
	}
};

std::vector< AttributedCharacter*> AttributedCharacter::characters;