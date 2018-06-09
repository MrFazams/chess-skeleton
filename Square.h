#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

class Square
{
	
	int rank;
	char file;

public:

	Square(char file, int rank);

	char getFile() const;
	int getRank() const;
	
};

#endif SQUARE_H