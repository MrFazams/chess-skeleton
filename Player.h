#ifndef PLAYER_H
#define PLAYER_H

#include "Piece.h"

enum clr { WHITE, BLACK };

class Player
{

	clr color;
	Piece * pieces[16];

public:

	Player(clr color);

	bool isInCheck() const;
	bool isInQueenCheck() const;
	bool isInCheckmate() const;
	bool hasValidMoves() const;

	Piece & operator[](unsigned int idx);

};

#endif PLAYER_H