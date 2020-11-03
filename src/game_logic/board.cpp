#include "board.h"

using std::cout;
using std::endl;
/**
 * Implement default constructor
 */
// Board::Board(): boardLength(DEFAULT_LENGTH), boardWidth(DEFAULT_WIDTH)
// {
//     map[0].resize(boardWidth);
//     map.resize(boardLength);
// }

Board::Board(int width, int length):
    boardLength(length), boardWidth(width),
    map(getLength(), std::vector<Piece>(getWidth(), Piece()))
{
    setFillerRow();
    cout << "Done with constructor" <<endl;
}

Board::~Board()
{}

/**
 * overload operator << for the board class. Used to display the board.
 */
std::ostream& operator<<(std::ostream& out, const Board& board)
{
    std::string buffer_space(board.getCellWidth(), ' ');

    // position start of board so everything lines up
    out << std::string (board.getCellWidth()-1, ' ');

    // Add in top numbers for columns
    for(int i = 1; i <= board.getWidth(); i++){
        out << buffer_space << i;
    }
    out << endl;

    // Add in each row - starts with filler row
    for(int row_num = 1; row_num <= board.getLength(); row_num++)
    {
        out << board.getFillerRow() << endl << " " << row_num << " ";

        // Add the internals to the row
        for(int col_num = 0; col_num < board.getWidth(); col_num++)
        {
            out << "|" << buffer_space;
        }
        // Add the last closure for a labelled row
        out << "|" <<endl;
    }

    // Add a filler row to finish off the board
    out << board.getFillerRow() << endl;

    // out <<  "    1   2   3" << endl
    //     << "   |---|---|---|" << endl
    //     << " 1 |   |   |   |" << endl
    //     << "   |---|---|---|" << endl
    //     << " 2 |   |   |   |" << endl
    //     << "   |---|---|---|" << endl
    //     << " 3 |   |   |   |" << endl
    //     << "   |---|---|---|" << endl;
    return out;
}


void Board::setFillerRow()
{
    // Zero out the string
    fillerRow = "";

    std::string buffer_space(cellWidth, ' ');
    std::string column_preset(cellWidth, '-');

    fillerRow = buffer_space;
    for(int i = 1; i <= boardWidth; i++)
    {
        fillerRow += "|" + column_preset;
    }

    fillerRow += "|";

}

// Getter and setter functions
int Board::getCellWidth() const {
    return cellWidth;
}

int Board::getLength() const {
    return boardLength;
}

int Board::getWidth() const {
    return boardWidth;
}

std::string Board::getFillerRow() const {
    return fillerRow;
}