#ifndef BOARD_INTERFACE_H
#define BOARD_INTERFACE_H
#include "piece.h"

class BoardInterface
{
    public:
        BoardInterface();
        virtual ~BoardInterface (){};
        virtual bool addPiece(Piece new_piece, int row, int col) = 0;
        virtual bool movePiece() = 0;

        virtual int getCellWidth() const = 0;
        virtual int getLength() const = 0;
        virtual int getWidth () const = 0;

        friend std::ostream& operator<<(std::ostream& out, const BoardInterface& board);

    protected:
        int boardWidth;
        int boardLength;

}; // end of class definition

#endif