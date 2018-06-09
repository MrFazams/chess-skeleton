#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"

class Rook : public virtual Piece
{

	bool hasMoved;

public:

	bool canMoveTo(const Square & sq) const;
	void moveTo(Square & sq) const;

};

#endif ROOK_H