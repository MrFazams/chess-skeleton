#ifndef PIECE_H
#define PIECE_H

#include "Square.h"

class Piece
{
protected:

	Square currentPosition;

public:

	virtual ~Piece();

	virtual bool canMoveTo(const Square & sq) const = 0;
	virtual void moveTo(Square & sq) = 0;

};

#endif PIECE_H