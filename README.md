# code_interview_B

- STM32 Nucleo F767ZI project
- Built using STM32CubeIDE 1.19
- C++ coding interview project for programming a simple Voltage sensor class

- A simple AdcPeripheral class provides a getRawValue method that returns a random uin16_t meant to represent a fake ADC raw value coming from a sensed voltage 
- An empty VoltageSensor class exists that needs to be modified to :
    -Add gain and offset memmbers
    -Add a constructor that receives gain, offset and a reference to an AdcPeripheral object
    -Add a getVoltage method that will return the converted raw value of the AdcPeripheral object using the gain and offset
- Add a simple test code in the main.cpp that instanciates the required objects to test the getVoltage method 
- Add a VoltageSensorManager class that will :
    -Take  an array of VoltageSensor object at construction time (size statically defined)
    -Provide a method named update that will iterate over all the managed VoltageSensor objects and compute the combined average voltage value
- Modify main.cpp to instanciates all necessary objects and provide a test code for computing the average of set of 10 voltage sensors objects

