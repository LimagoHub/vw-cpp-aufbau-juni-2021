#include <chrono>
#include <iostream>
#include <thread>



#include "CalcClient.h"
#include "CalculatorFactory.h"




int main()
{
	
	client::CalcClient client(CalculatorFactory::createCalculator());
	client.run();

	
}

