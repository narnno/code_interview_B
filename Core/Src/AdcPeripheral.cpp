#include <AdcPeripheral.hpp>
#include <stdlib.h> // Needed for rand()


#undef RAND_MAX
#define RAND_MAX 65534

AdcPeripheral::AdcPeripheral()
{
    srand(0);
}

uint16_t AdcPeripheral::getRawValue()
{
    return rand() % RAND_MAX;
}
