#include "Pokeball.h"

bool Pokeball::empty() const
{
    return _pokemon == nullptr;
}

void Pokeball::store(std::unique_ptr<Pokemon> pokemon)
{
    _pokemon = std::move(pokemon);
}

Pokemon& Pokeball::pokemon() const
{
    return *_pokemon;
}