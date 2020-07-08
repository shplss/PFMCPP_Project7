#include "HelpfulItem.h"

#include "Utility.h"

HelpfulItem::HelpfulItem() : Item("helpful item", 2)
{ 

}

HelpfulItem::~HelpfulItem()
{
    
}

void HelpfulItem::use(Character* character)
{
    useHelpfulItem(character, this);
}
