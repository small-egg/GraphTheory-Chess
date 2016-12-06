#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

class Figure
{
public:
    typedef std::pair<size_t, size_t> Cord;

    enum Team { NONE = 0, WHITE = 1, BLACK = 2 };
    enum Type { NO   = 0, KING  = 1, ROOK  = 2 };

    Figure();
    Figure(Team team, Type type, Cord cord);

    Team    team();
    Type    type();
    Cord    cord();

    void    move();

private:
    Team _team;
    Type _type;
    Cord _cord;
};

#endif // FIGURE_H