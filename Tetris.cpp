#include <iostream>
#include "Tetris.h"

using namespace std;

int playBlock[4][4];

int main()
{
	Block B;
	B.rotate(playBlock, B.block[0]);
	Draw D;
	D.drawBoard();
}
