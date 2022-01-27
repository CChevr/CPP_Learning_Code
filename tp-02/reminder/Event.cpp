#include "Event.h"

bool Event::notify_time(int current_min, int current_sec)
{
    if (_notif_time.first == current_min && _notif_time.second == current_sec)
    {
        std::cout << _message << std::endl;
        return true;
    }

    return false;
}