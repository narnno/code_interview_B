#ifndef VOLTAGESENSOR_HPP_
#define VOLTAGESENSOR_HPP_

#include <AdcPeripheral.hpp>
#include <stdint.h>


class VoltageSensor{
    public:
		VoltageSensor();
        virtual float getVoltage();
    private:
};

#endif
