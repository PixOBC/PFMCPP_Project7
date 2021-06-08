#pragma once

#include "Character.h"
#include "Utility.h"

struct Dragon : Character
{
    Dragon(std::string name, int hp_, int armor_);
    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;
private:
    const std::string name;
};

