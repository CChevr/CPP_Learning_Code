#pragma once
#include "MinuteHand.h"

class SecondHand
{
public:
    SecondHand(MinuteHand& m)
        : _min_hand { m }
    {}
    unsigned int get_seconds();
    void         advance();

private:
    unsigned int _seconds = 0;
    MinuteHand&  _min_hand;
};