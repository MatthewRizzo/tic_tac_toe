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
#include "board_interface.h"

#define DEFAULT_LENGTH 3
#define DEFAULT_WIDTH 3

class TTTBoard : public BoardInterface
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

        // preformat's the string of in between layers
        void setFillerRow();
        std::vector< std::vector<Piece> > board;

    public:
        // Constructor options
        TTTBoard(int width = DEFAULT_WIDTH, int length = DEFAULT_LENGTH);
        ~TTTBoard();

        friend std::ostream& operator<<(std::ostream& out, const TTTBoard& board);

        // Getter functions
        int getCellWidth() const override;
        int getLength() const override;
        int getWidth () const override;
        std::string getFillerRow() const;

        // Functions to manage the board
        bool addPiece(Piece new_piece, int row, int col) override;

        // For tic tax toe, moving is not required
        bool movePiece() override {};
};

#endif