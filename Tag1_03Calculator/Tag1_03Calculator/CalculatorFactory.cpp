#include "CalculatorFactory.h"

#include "CalculatorLogger.h"
#include "CalculatorSecure.h"

vw::math::Calculator & CalculatorFactory::createCalculator()
{
	
		vw::math::CalculatorImpl impl = vw::math::CalculatorImpl();
		vw::math::CalculatorLogger logger = vw::math::CalculatorLogger(impl);
		vw::math::CalculatorSecure secure = vw::math::CalculatorSecure(logger);
		return secure;
	
}
