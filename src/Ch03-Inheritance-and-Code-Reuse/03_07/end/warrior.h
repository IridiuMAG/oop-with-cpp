#ifndef WARRIOR_H
#define WARRIOR_H

#include "character.h"
#include "equipment.h"

class Warrior : public Character
{
public:
  Warrior(const std::string &name, int health, int strength);
  void attack() const;
  void displayStats() const;
  void addItem(const std::string &item);

private:
  int strength;
  Equipment equipment;
};

#endif