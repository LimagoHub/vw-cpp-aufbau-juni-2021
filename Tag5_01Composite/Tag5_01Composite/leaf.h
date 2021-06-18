#pragma once
#include "abstract_node.h"
class leaf : // konto
    public abstract_node
{
	//double saldo;
	
public:
	leaf(const std::string& name): abstract_node(name) {}

	// Getter und setter für saldo

protected:
	void print(std::ostream& os) const override
	{
		// Saldo mit ausgeben
		os << "Leaf: ";
		abstract_node::print(os);
	}
};

