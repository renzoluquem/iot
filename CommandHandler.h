/**
 * @author Renzo Andres Luque Minaya
 */
#ifndef COMMAND_HANDLER_H
#define COMMAND_HANDLER_H

class Command {
public:
  int id;
  explicit Command(int id) : id(id) {}
  bool operator==(const Command& other) const { return id == other.id; }
};

class CommandHandler {
public:
  virtual void handle(Command command) = 0;
  virtual ~CommandHandler() = default;
};
#endif