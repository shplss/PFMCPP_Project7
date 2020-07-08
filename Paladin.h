#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(std::string name_, int hitPoints_, int armor_);

    ~Paladin() override;

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
