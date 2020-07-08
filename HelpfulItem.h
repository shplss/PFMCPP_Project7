#pragma once

#include "Item.h"

struct Character;
struct HelpfulItem : Item
{
    HelpfulItem();

    ~HelpfulItem() override;
    
    void use(Character* character) override;
};
