#ifndef POSITION_H
#define POSITION_H

struct Position{
    int x_;
    int y_;

    Position(int x, int y) : x_(x), y_ (y) {}

    bool operator==(const Position& pos) const   {return (x_ == pos.x_ && y_ == pos.y_);}
};

#endif // POSITION_H
