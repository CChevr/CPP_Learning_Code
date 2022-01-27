#include "Histogram.h"
#include <iostream>

void Histogram::analyze(const std::string& chaine) {
    for(auto elem: chaine)
    {
        if(elem >= 'a' && elem <= 'z') {
            _count[elem - 'a'] += 1u;
        }
    }
}

void Histogram::print() const {
    for(auto i = 0u; i < _count.capacity(); i++)
    {
        std::cout << char('a' + i) << " : " << _count[i] << std::endl;
    }
}