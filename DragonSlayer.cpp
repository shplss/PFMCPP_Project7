#include "DragonSlayer.h"

#include "Utility.h"
#include "AttackItem.h"

#include "Dragon.h"

DragonSlayer::DragonSlayer(std::string name_, int hitPoints_, int armor_)  : Character(hitPoints_, armor_, 4),
                                                                             name(name_)
                                                                             
{
    helpfulItems = makeHelpfulItems(randomNumber());
    defensiveItems = makeDefensiveItems(randomNumber());

    attackItem = std::unique_ptr<AttackItem>(new AttackItem());
}

DragonSlayer::~DragonSlayer()
{
    
}

const std::string& DragonSlayer::getName()
{
    return name;
}

std::string DragonSlayer::getStats()
{
    std::string stats = getCharacterStats(this);
    
    return stats;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note that items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.

        if(attackItem != nullptr)
        {
            attackItem->use(this);
            attackItem.reset();
        }
          
        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
}
