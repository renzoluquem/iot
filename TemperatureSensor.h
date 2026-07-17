/**
 * @author Renzo Andres Luque Minaya
 */
#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H
#include "Sensor.h"
#include "DHT.h"

/** @brief Reads ambient temperature from a DHT22 sensor. */
class TemperatureSensor : public Sensor {
public:
  TemperatureSensor(int pin, EventHandler* eventHandler = nullptr);
  void setup();
  double get____________();   // (1) ¿cómo llamas al método que devuelve la temperatura?
private:
  DHT dht;
};
#endif