#ifndef QUEEN_H
#define QUEEN_H

#include "Rook.h"
#include "Bishop.h"

class Queen : public Rook, public Bishop
{
public:

	bool canMoveTo(const Square & sq) const;
	void moveTo(Square & sq);

};

#endif QUEEN_H