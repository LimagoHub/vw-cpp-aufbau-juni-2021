#include <chrono>
#include <iostream>
#include <thread>



#include "CalcClient.h"
#include "CalculatorImpl.h"
#include "CalculatorLogger.h"
#include "CalculatorSecure.h"

int main()
{

	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();  // Zeitpunkt
	
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	
	std::chrono::system_clock::time_point end = std::chrono::system_clock::now();

	std::chrono::duration<double, std::ratio<1>> dur = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

	std::cout << "Hello World!, Dauer: " << dur.count() << std::endl;
	
	vw::math::CalculatorImpl impl = vw::math::CalculatorImpl();
	vw::math::CalculatorLogger logger = vw::math::CalculatorLogger(impl);
	vw::math::CalculatorSecure secure = vw::math::CalculatorSecure(logger);
	vw::math::Calculator& calc = secure;


	client::CalcClient client(calc);
	client.run();

	
}

