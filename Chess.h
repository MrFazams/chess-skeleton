#ifndef CHESS_H
#define CHESS_H

#include "Board.h"

class Interface
{

	bool exit;
	Board board;

	void input();
	bool inputIsValid() const;
	void parseInput(Piece & piece, Square & square);

public:

	void start();

};

#endif CHESS_H