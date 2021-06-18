#pragma once
#include <iostream>
#include <string>
#include <vector>

class abstract_node abstract
{
	std::string name_;
	abstract_node* parent_;

public:
	virtual ~abstract_node() = default;

	explicit abstract_node(std::string name = "undef")
		: name_(std::move(name)), parent_(nullptr)
	{
	}

	virtual auto get_children() -> const std::vector<abstract_node*>&
	{
		static std::vector<abstract_node*> dummy{};
		return dummy;
	}


	std::string get_name() const
	{
		return name_;
	}

	abstract_node* get_parent() const
	{
		return parent_;
	}

	void set_name(const std::string& name)
	{
		name_ = name;
	}

	void set_parent(abstract_node* const parent)
	{
		parent_ = parent;
	}

	
	
	friend std::ostream& operator<<(std::ostream& os, const abstract_node& obj)
	{
		obj.print(os);
		return os;

	}

	friend bool operator==(const abstract_node& lhs, const abstract_node& rhs)
	{
		return lhs.name_ == rhs.name_
			&& lhs.parent_ == rhs.parent_;
	}

	friend bool operator!=(const abstract_node& lhs, const abstract_node& rhs)
	{
		return !(lhs == rhs);
	}

protected:
	virtual void print(std::ostream& os) const // Hilfsmethode um Polymorphie zu nutzen
	{
		os << "name: " << this->name_;
	}
};

