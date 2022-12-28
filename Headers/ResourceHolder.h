#pragma once
#include <SFML/Graphics.hpp>

template <typename Resource, typename Identifier>
class ResourceHolder
{
private:
    Resource* resources;
public:
    ResourceHolder(Identifier id);
    void load(Identifier id, const char* filename, sf::IntRect area);
    void load(Identifier id, const char* filename);
    Resource& get(Identifier id);
    ~ResourceHolder();
};







