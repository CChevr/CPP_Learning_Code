#pragma once
#include "Pokemon.h"

#include <iostream>
#include <memory>
#include <utility>

// A ball where Pokemon sleep.
class Pokeball
{
public:
    bool     empty() const;
    void     store(std::unique_ptr<Pokemon> pokemon);
    Pokemon& pokemon() const;

private:
    std::unique_ptr<Pokemon> _pokemon;
};