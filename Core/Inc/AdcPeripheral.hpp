#ifndef ADCPERIPHERAL_HPP_
#define ADCPERIPHERAL_HPP_

#include <stdint.h>

class AdcPeripheral{
    public:
		AdcPeripheral();
        virtual uint16_t getRawValue();
};

#endif
