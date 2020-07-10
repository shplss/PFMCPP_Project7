#pragma once

#include "Item.h"

struct Character;
struct AttackItem : Item
{
    AttackItem();
    
    ~AttackItem() override;

    void use(Character* character) override;
};
