#pragma once

#include "Character.h"

struct Dwarf : Character
{
    Dwarf(std::string name_, int hitPoints_, int armor_);

    ~Dwarf() override;

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
