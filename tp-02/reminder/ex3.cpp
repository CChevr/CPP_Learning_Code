#include "Clock.h"
#include "MinuteHand.h"
#include "Parsing.h"
#include "SecondHand.h"

#include <iostream>

int main(int argc, char** argv)
{
    Clock clock {};
    for (auto event : parse_events(argc, argv))
    {
        clock.add_event(event);
    }
    for (auto i = 0; i < 22 * 60; i++)
    {
        clock.tick();
    }
    std::cout << "fin" << std::endl;
    /*
    Clock      c;
    std::cout << c.get_minutes() << ":" << c.get_seconds() << std::endl;
    for (auto i = 0; i < 61; i++)
    {
        c.tick();
        std::cout << c.get_minutes() << ":" << c.get_seconds() << std::endl;
    }
    */

    /*
    MinuteHand m;
    SecondHand s { m };
    std::cout << m.get_minutes() << std::endl;
    std::cout << s.get_seconds() << std::endl;

    for(auto i = 0; i < 61; i++) {
        s.advance();
    }

    std::cout << m.get_minutes() << std::endl;
    std::cout << s.get_seconds() << std::endl;
    */

    return 0;
}