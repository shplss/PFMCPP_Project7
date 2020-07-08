#include "Dwarf.h"

#include "Utility.h"

Dwarf::Dwarf(std::string name_, int hitPoints_, int armor_) : name(name_),
                                                              Character(hitPoints_, armor_, 4)
                                                              
{
    helpfulItems = makeHelpfulItems(randomNumber());
    defensiveItems = makeDefensiveItems(randomNumber());
}

Dwarf::~Dwarf()
{

}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    std::string stats = getCharacterStats(this);
    
    return stats;
}
