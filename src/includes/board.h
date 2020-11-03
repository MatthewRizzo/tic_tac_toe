/**
 * File of Board class responsible for organizing the board itself
 */
#ifndef BOARD_H
#define BOARD_H

// Standard Includes
#include <iostream>
#include <vector>
#include <string>

// Project Includes
#include "const.h"
#include "piece.h"

#define DEFAULT_LENGTH 3
#define DEFAULT_WIDTH 3

class Board
{
    private:
        // width is horizontal
        int boardWidth;
        // length is vertical
        int boardLength;

        // Number of character spaces each cell is
        int cellWidth = 3;

        std::string fillerRow = "";

        // Stores the status of the board
        // in a 2D vector of char's
        std::vector< std::vector<Piece> > map;

        // preformat's the string of in between layers
        void setFillerRow();

    public:
        // Constructor options
        Board(int width = DEFAULT_WIDTH, int length = DEFAULT_LENGTH);
        ~Board();

        friend std::ostream& operator<<(std::ostream& out, const Board& board);

        // Getter functions
        int getCellWidth() const;
        int getLength() const;
        int getWidth () const;
        std::string getFillerRow() const;
};

#endif