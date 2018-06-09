#ifndef BISHOP_H
#define BISHOP_H

#include "Piece.h"

class Bishop : public virtual Piece
{
public:

	bool canMoveTo(const Square & sq) const;
	void moveTo(Square & sq);

};

#endif BISHOP_H