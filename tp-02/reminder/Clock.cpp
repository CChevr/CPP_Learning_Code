#include "Clock.h"
void Clock::tick()
{
    auto pos = 0;
    _sec_hand.advance();
    for (auto event : _events)
    {
        if (event.notify_time(_min_hand.get_minutes(), _sec_hand.get_seconds()))
        {
            _events.erase(_events.begin() + pos);
        }

        pos++;
    }
}

unsigned int Clock::get_minutes()
{
    return _min_hand.get_minutes();
}

unsigned int Clock::get_seconds()
{
    return _sec_hand.get_seconds();
}

void Clock::add_event(const Event& event)
{
    _events.emplace_back(event);
}