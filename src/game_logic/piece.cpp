#include "piece.h"

// Create constructors
Piece::Piece(): piece_type(piece_t::empty) {}
Piece::Piece(piece_t type) : piece_type(type) {}
Piece::~Piece(){}

