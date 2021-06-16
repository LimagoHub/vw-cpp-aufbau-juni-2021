// Tag3_06Templates.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

//template<typename HERBERT>
//void swap(HERBERT &a, HERBERT &b)
//{
//	static_assert(std::is_arithmetic<HERBERT>::value, "Parameter muss numerisch sein");
//	
//	
//	HERBERT temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T1, typename T2>
//auto MAX(T1 a , T2 b)->decltype(a + b)
//{
//	static_assert(std::is_arithmetic<T1>::value, "Parameter muss numerisch sein");
//	static_assert(std::is_arithmetic<T1>::value, "Parameter muss numerisch sein");
//
//	return a > b ? a : b;
//}
//
//template<class T, int size>
//class Stapel
//{
//	T elements[size];
//	int index{0};
//public :
//	Stapel() = default;
//	void push(T value)
//	{
//		elements[index++] = value;
//	}
//	T pop()
//	{
//		if (is_empty())
//			return T();
//		
//		return elements[--index];
//	}
//
//	bool is_empty() const
//	{
//		return index <= 0;
//	}
//
//	bool is_full() const
//	{
//		return index >= size;
//	}
//
//};



template<typename T>
void f(T head)
{
	
	std::cout << head << std::endl;
	
}

template<typename T, typename... Tail>
void f(T head, Tail... tail)
{
	std::cout << head << std::endl;
	f(tail...);
}

template<typename T>
T summe(T head)
{
	static_assert(std::is_arithmetic<T>::value, "Parameter muss numerisch sein");
	return head;

}

template<typename T, typename... Tail>
double summe(T head, Tail... tail)
{
	static_assert(std::is_arithmetic<T>::value, "Parameter muss numerisch sein");
	
	return head+summe(tail...);
}

// Nicht zuhause nachmachen!!! Compilerspezifisch
void ausgabe(char* value, ...) // Elipse
{
	char ** ptr = &value;

	while(*ptr)
	{
		std::cout << *ptr++ << std::endl;
	}
}



int main()
{

	ausgabe((char*) "Hallo", "welt", "Hallo", "universum", nullptr);


	
	double sum = summe(10, 20.0, 30.f, 40);

	std::cout << sum << std::endl;
	
	f(1, 10.0, "Hallo", 5);
	
	// Stapel<int, 10> mystack;
	//
	// // mystack.push(10);
	// std::cout << mystack.pop() << std::endl;
	//
	/*int x = 10;
	int y = 20;

	swap(x, y);

	auto wert = MAX(1, 10.0);

	std::cout << x << " " << y << std::endl;*/

	
    std::cout << "Hello World!\n";
}

