#include "Dragon.h"
#include "DragonSlayer.h"

Dragon::Dragon(std::string name, int hp_, int armor_)
    : Character(hp_, armor_, 80)
{

}

const std::string& Dragon::getName()
{
    return name;
}

std::string Dragon::getStats()
{
    getCharacterStats(this);
}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}


