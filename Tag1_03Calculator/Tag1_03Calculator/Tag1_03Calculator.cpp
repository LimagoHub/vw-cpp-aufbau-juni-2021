#include <chrono>
#include <iostream>
#include <thread>



#include "CalcClient.h"
#include "CalculatorImpl.h"
#include "CalculatorLogger.h"
#include "CalculatorSecure.h"

vw::math::Calculator & createCalculator()
{
	vw::math::CalculatorImpl impl = vw::math::CalculatorImpl();
	vw::math::CalculatorLogger logger = vw::math::CalculatorLogger(impl);
	vw::math::CalculatorSecure secure = vw::math::CalculatorSecure(logger);
	return secure;
}

int main()
{
	
	client::CalcClient client(createCalculator());
	client.run();

	
}

