#include <algorithm>
#include <iostream>
#include <vector>

int main()
{

	std::vector<int> intvec{ 10,20,30,40 };


	for(auto it = intvec.begin(); it!=intvec.end() ; it++ )
		std::cout << *it << std::endl;

	for(int i = 0; i < intvec.size() ; i ++)
	{
		std::cout << intvec[i] << std::endl;
	}

	std::for_each(intvec.begin(), intvec.end(), [](const int i) {std::cout << i << "\n"; });
	
    std::cout << "Hello World!\n";
}

