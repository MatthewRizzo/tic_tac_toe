/**
 * File containing the Piece class.
 * Manages pieces that go on the board.
 */
#ifndef PIECE_H
#define PIECE_H
#include "const.h"

/**
 * Class to manage valid types of pieces.
 */
enum class piece_t : char
{
    cross = 'X',
    circle = 'O',
    empty = ' ',
};


class Piece {
    private:
        piece_t piece_type;

    public:
        Piece();
        Piece(piece_t type);
        ~Piece();
};

#endif