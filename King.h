#ifndef KING_H
#define KING_H

#include "Piece.h"

class King : public Piece
{

	bool hasMoved;

public:

	bool canMoveTo(const Square & sq) const;
	void moveTo(Square & sq);
	bool canCastle(const Square & sq) const;
	void castleTo(Square & sq);

};

#endif KING_H