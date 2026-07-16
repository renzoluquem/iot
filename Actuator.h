/**
 * @author Renzo Andres Luque Minaya
 */
#ifndef ACTUATOR_H
#define ACTUATOR_H
#include <Arduino.h>
#include "CommandHandler.h"

class Actuator {
protected:
  int pin;
public:
  explicit Actuator(int pin) : pin(pin) {}
  virtual void handle(Command command) = 0;
  virtual ~Actuator() = default;
};
#endif