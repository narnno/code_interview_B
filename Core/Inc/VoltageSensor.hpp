#ifndef VOLTAGESENSOR_HPP_
#define VOLTAGESENSOR_HPP_

#include <AdcPeripheral.hpp>
#include <stdint.h>


class VoltageSensor{
    public:
        VoltageSensor(uint16_t offset, float gain, AdcPeripheral& adc);
        virtual float getVoltage();
    private:
        uint16_t offset;
        float gain;
        AdcPeripheral& adc;

};

#endif
