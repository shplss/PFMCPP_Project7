#include "Dragon.h"

#include "Utility.h"

#include "DragonSlayer.h"

Dragon::Dragon(std::string name_, int hitPoints_, int armor_) : name(name_),
                                                                Character(hitPoints_, armor_, 80)
{
    
}

Dragon::~Dragon()
{
    
}

const std::string& Dragon::getName()
{
    return name;
}

std::string Dragon::getStats()
{
    std::string stats = getCharacterStats(this);
    
    return stats;
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
