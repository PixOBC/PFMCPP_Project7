#include "Dwarf.h"

Dwarf::Dwarf(std::string name, int hp_, int armor_)
    : Character(hp_, armor_, 4)
{

}

const std::string& Dwarf::getName()
{
    return name;
}
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}