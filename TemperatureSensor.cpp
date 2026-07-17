/**
* @author Renzo Andres Luque Minaya
 */
#include "TemperatureSensor.h"

TemperatureSensor::TemperatureSensor(int pin, EventHandler* eventHandler)
  : Sensor(pin, eventHandler), dht(pin, DHT22) {}

void TemperatureSensor::setup() {
  dht.begin();
}

double TemperatureSensor::getTemperature() {
  return dht.readTemperature();
}