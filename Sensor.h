/**
 * @author Renzo Andres Luque Minaya
 */
#ifndef SENSOR_H
#define SENSOR_H
#include <Arduino.h>
#include "EventHandler.h"

class Sensor {
protected:
  int pin;
  EventHandler* handler;
public:
  Sensor(int pin, EventHandler* eventHandler = nullptr) : pin(pin), handler(eventHandler) {}
  void setHandler(EventHandler* eventHandler) { handler = eventHandler; }
  void triggerEvent(Event event) { if (handler != nullptr) handler->on(event); }
};
#endif