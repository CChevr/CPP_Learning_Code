#pragma once

class MinuteHand
{
public:
    unsigned int get_minutes();
    void         advance();

private:
    unsigned int _minutes = 0;
};