#ifndef WORLD_H
#define WORLD_H
#include<list>
#include ""

class World
{
    std::pair<int, int> m_mapDimension;
    std::pair<int, int> m_foodPosition;

    std::list<Segment> m_segments;
    Direction m_currentDirection;

public:
    World();
};

#endif // WORLD_H
