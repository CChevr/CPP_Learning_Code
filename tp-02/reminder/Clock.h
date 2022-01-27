#pragma once
#include "Event.h"
#include "MinuteHand.h"
#include "SecondHand.h"

#include <iostream>
#include <ostream>
#include <vector>

class Clock
{
public:
    Clock()
        : _min_hand()
        , _sec_hand(_min_hand)
    {}

    void         tick();
    unsigned int get_minutes();
    unsigned int get_seconds();
    void         add_event(const Event&);

private:
    MinuteHand         _min_hand;
    SecondHand         _sec_hand;
    std::vector<Event> _events;
};

// std::ostream& operator<<(std::ostream& stream, const Clock& clock);
