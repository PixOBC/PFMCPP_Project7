#pragma once
#include "Character.h"
#include "Utility.h"

struct Dwarf : Character
{
    Dwarf(std::string name, int hp_, int armor_);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};