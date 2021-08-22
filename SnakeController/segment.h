#ifndef SEGMENT_H
#define SEGMENT_H

#include<list>
#include<SnakeInterface.hpp>

struct Segment
{
    int x;
    int y;

    std::list<Segment> m_segments;
    Direction m_currentDirection;
};
#endif // SEGMENT_H
