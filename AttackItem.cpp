#include "AttackItem.h"

#include "Utility.h"

AttackItem::AttackItem() : Item("attack item", 1)
{ 

}

AttackItem::~AttackItem()
{
    
}

void AttackItem::use(Character *character)
{
    useAttackItem(character, this);
}
