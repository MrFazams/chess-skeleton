#ifndef KNIGHT_H
#define KNIGHT_H

#include "Piece.h"

class Knight : public Piece
{
public:

	bool canMoveTo(const Square & sq) const;
	void moveTo(Square & sq);

};

#endif KNIGHT_H