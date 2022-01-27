#include "SecondHand.h"

unsigned int SecondHand::get_seconds()
{
    return SecondHand::_seconds;
}

void SecondHand::advance()
{
    if (SecondHand::_seconds == 59)
    {
        SecondHand::_min_hand.advance();
        SecondHand::_seconds = 0;
    }
    else
    {
        SecondHand::_seconds += 1;
    }
}