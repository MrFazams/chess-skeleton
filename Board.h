#ifndef BOARD_H
#define BOARD_H

#include "Player.h"

class Board
{

	Player white, black;
	clr playerToMove;
	bool whiteCheck;
	bool blackCheck;

public:

	Board();

	bool moveIsValid() const;
	void draw() const;
	void move(Piece & piece, Square & sq);

};

#endif BOARD_H