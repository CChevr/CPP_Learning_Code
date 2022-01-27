#include "Polygon.h"

void Polygon::add_vertex(int x, int y)
{
    _vertices.emplace_back(x, y);
}

std::ostream& operator<<(std::ostream& stream, const Polygon& polygon)
{
    for (const auto& vertrice : polygon._vertices)
    {
        stream << "(" << vertrice.first << "," << vertrice.second << ") ";
    }

    return stream;
}

const Vertex& Polygon::get_vertex(size_t i) const
{
    return _vertices[i];
}