#include "warrior.h"

Warrior::Warrior(const std::string &name, int health, int strength)
    : Character(name, health), strength(strength)
{
}

void Warrior::attack() const
{
  std::cout << name << " attacks for " << BASE_DAMAGE + strength << " damage!"
            << " (" << BASE_DAMAGE << " base + " << strength << " strength)"
            << std::endl;
}

void Warrior::displayStats() const
{
  Character::displayStats();
  std::cout << "Strength: " << strength << std::endl;
  equipment.displayInventory();
}

void Warrior::addItem(const std::string &item)
{
  equipment.addItem(item);
}