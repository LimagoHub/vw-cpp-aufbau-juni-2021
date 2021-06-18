#pragma once
#include <algorithm>
#include <vector>


#include "abstract_node.h"

class node :
    public abstract_node
{
	std::vector<abstract_node*> children;

public:

	node(const std::string& name) : abstract_node(name) {}

	auto get_children()-> const std::vector<abstract_node*> & override
	{
		return children;
	}

	void append(abstract_node* child)
	{
		children.push_back(child);
		child->set_parent(this);
	}

	void remove(abstract_node* child)
	{
		const auto position = std::find(children.begin(), children.end(), child);
		if (position != children.end()) {
			children.erase(position);
			child->set_parent(nullptr);
		}
	}

protected:
	
	void print(std::ostream& os) const override
	{
		os << "Node: ";
		abstract_node::print(os);
	}
};

