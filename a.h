//
// Created by ADMIN on 7.2.2021 г..
//

#ifndef CHESS_NEURON_NETWORK_A_H
#define CHESS_NEURON_NETWORK_A_H

#endif //CHESS_NEURON_NETWORK_A_H

#define SIZE 8
enum type { empty, pawn, knight, bishop, rook, queen, king };
enum color { black, white };

struct square
{
    enum type type;
    enum color color;
} board[8][8];

struct position
{
    int x, y;
};

struct move
{
    struct position from, to;
};

enum bool { false, true };

typedef unsigned weight;

struct undo
{
    struct position position;
    enum type taken;
};

struct piece
{
    weight (*weight)(struct position pos);
    enum bool (*valid_move)(struct move move);
    void(*play_move)(struct move move, struct undo *taken);
    enum bool (*enum_move)(struct position *pos, struct move *move); // pos!=0 for the first move
} piece[7];