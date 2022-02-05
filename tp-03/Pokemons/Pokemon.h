#pragma once
#include <iostream>
#include <string>

// A creature that is cute and can fight other ones.
class Pokemon
{
public:
    Pokemon(std::string name)
        : _name { name }
    {}

    const std::string name() const;

private:
    const std::string _name;
};
