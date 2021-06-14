#include <iostream>

class Schwein
{
private:
	std::string name;
	int gewicht;
public:
	Schwein(std::string name = "nobody") :name(name), gewicht(10){}


	std::string get_name() const
	{
		return name;
	}

	void set_name(const std::string& name)
	{
		this->name = name;
	}

	int get_gewicht() const
	{
		return gewicht;
	}

	void fressen()
	{
		gewicht++;
	}

	Schwein& operator ++ ()
	{
		gewicht++;
		return *this;
	}
	Schwein operator ++ (int dummy) // Post increment
	{
		Schwein temp = *this;
		gewicht++;
		return temp;
	}
};

std::ostream& operator<<(std::ostream& os, const Schwein& schwein)
{
	os << "Name = " << schwein.get_name() << std::endl;
	os << "Gewicht = " << schwein.get_gewicht() << std::endl;

	return os;

}

void foo(int& a)
{

	std::cout << "LValue: " << a << std::endl;
}

void foo(int&& a)
{

	std::cout << "RValue: " << a << std::endl;
}

//void schweinerei(const Schwein &s)
//{
//	int g = s.get_gewicht();
//	
//}

int z = 10;

 int  get_z()
{
	return z;
}

int main()
{
	
	Schwein piggy;
 	
	std::cout << piggy++ << std::endl;
	std::cout << piggy << std::endl;
}
 	
	//int d, e, f;

	//d = e = f = 10;
	////get_z() = 5;

	//foo(get_z());
	//
	//int x = 10;
	//foo(x);
	//foo(10);
	//foo(std::move(x));

	//Schwein piggy;

	//std::cout << piggy << std::endl;

	////schweinerei(piggy);

	//
	//std::cout << x << std::endl;

//      std::cout << "Hello World!\n";
// }


