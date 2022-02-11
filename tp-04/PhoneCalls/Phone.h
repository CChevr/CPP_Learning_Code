#pragma once

#include "Person.h"

class Phone
{
public:
    Phone(const Person& owner)
        : _owner { owner }
    {}
    virtual ~Phone() {}

    virtual void ring() const { _owner.answer_phone(); }

protected:
    const Person& _owner;
};
