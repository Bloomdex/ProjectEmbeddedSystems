#ifndef DATAHANDLER_H_
#define DATAHANDLER_H_

#include <avr/io.h>

#define TEMPERATURE_POOL_STORAGE_SIZE 20
#define LIGHTINTENSITY_POOL_STORAGE_SIZE 20
#define DISTANCE_POOL_STORAGE_SIZE 20

void updateSensorData(int8_t currentTemperature, int8_t currentLightIntensity, int8_t currentDistance);
int8_t getTemperatureMod();
int8_t getLightIntensityMod();
int8_t getDistanceMod();

int8_t getMode(int8_t array[], uint8_t size) ;

#endif /* DATAHANDLER_H_ */
