/**
 * @author Renzo Andres Luque Minaya
 */
 
#ifndef EVENT_HANDLER_H
#define EVENT_HANDLER_H

class Event {
public:
  int id;
  explicit Event(int id) : id(id) {}
  bool operator==(const Event& other) const { return id == other.id; }
};

class EventHandler {
public:
  virtual void on(Event event) = 0;
  virtual ~EventHandler() = default;
};
#endif