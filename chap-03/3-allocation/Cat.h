#pragma once

#include <iostream>
#include <string>

class Cat
{
    friend std::ostream& operator<<(std::ostream& stream, const Cat& cat)
    {
        return stream << "I have a cat named " << cat._name << ".";
    }

public:
    Cat(std::string name)
        : _name { name }
    {}
    bool operator==(const Cat& other) const { return _name == other._name; }
    ~Cat() { std::cout << "Cat " << _name << " has died..." << std::endl; }

private:
    std::string _name = "Felix";
};