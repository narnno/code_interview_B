#include <VoltageSensor.hpp>


VoltageSensor::VoltageSensor(uint16_t offset, float gain, AdcPeripheral& adc) : offset(offset), gain(gain), adc(adc)
{

}
float VoltageSensor::getVoltage()
{
    uint16_t rawValue = adc.getRawValue();
    return (rawValue + offset) * gain;
}