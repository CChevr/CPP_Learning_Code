#pragma once // Permet de ne recopier qu'une seule fois ce header
#include <ostream>

class Rectangle
{
public:
    Rectangle();
    Rectangle(float size);
    Rectangle(float length, float width);
    /*
    Rectangle(float length, float width)
        : _length { length }
        , _width { width }
    {}
    */

    float       get_length() const { return _length; }
    float       get_width() const { return _width; }
    static void set_default_size(float size);

    void scale(float ratio);
    /*
    void scale(float ratio)
    {
        _length *= ratio;
        _width *= ratio;
    }
    */

private:
    static float _default_size;
    float        _length;
    float        _width;
};

std::ostream& operator<<(std::ostream& stream, const Rectangle& Rectangle);