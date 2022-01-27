#include "MinuteHand.h"

unsigned int MinuteHand::get_minutes()
{
    return MinuteHand::_minutes;
}

void MinuteHand::advance()
{
    MinuteHand::_minutes += 1;
}