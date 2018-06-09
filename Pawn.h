#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn : public Piece
{

	bool hasMoved;
	bool movedTwoSquaresLastTurn;

	void promote();

public:

	bool canMoveTo(const Square & sq) const;
	void moveTo(Square & sq);

};

#endif PAWN_H