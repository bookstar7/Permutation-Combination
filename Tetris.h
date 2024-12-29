#pragma once
#include <iostream>
using namespace std;
class Block
{
public:
	int block[5][4][4] =
	{
	{ {0, 1, 1},
	{0, 0, 1},
	{0, 0, 1} },
	{ {0, 0, 1},
	{0, 0, 1},
	{0, 0, 1} },
	{ {0, 1, 1},
	{0, 1, 1},
	{0, 0, 0} },
	{ {1, 1, 0},
	{0, 1, 0},
	{0, 1, 1} } };

public:
	void rotate(int newBlock[][4], int orgBlock[][4]);
	void drawBlock(int trgBlock[][4]);
};

void Block::rotate(int newBlock[][4], int orgBlock[][4])
{
	int tmp[4][4] = { 0, };
	int y = 0;
	for (int i = 0; i < 3; i++)
	{
		int x = 2;
		for (int j = 0; j < 3; j++)
		{
			tmp[x][y] = orgBlock[i][j];
			x--;
		}
		y++;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			newBlock[i][j] = tmp[i][j];
	}
}
void Block::drawBlock(int trgBlock[][4])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << trgBlock[i][j];
		cout << endl;
	}
}

class Draw
{
private:
	int width = 20;
	int height = 15;
public:
	void drawBoard();
};

void Draw::drawBoard()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
			{
				cout << "▒▒";
				if (j == width - 1)
					cout << endl;
			}
			else if (i==height-1)
				cout << "▒";
			else
			{
				cout << " ";
			}
		}
	}
}
