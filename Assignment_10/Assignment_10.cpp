/*
Christopher Custer
Assignment 10
Program Description: Making Minesweeper with functions and multidimesional arrays.

*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

const int BOARD_WIDTH = 12;
const int BOARD_HEIGHT = 9;

bool mines[BOARD_WIDTH][BOARD_HEIGHT];
char board[BOARD_WIDTH][BOARD_HEIGHT];


//void displayBoard(char board[][BOARD_HEIGHT], int width, int height)
//{
//
//	
//
//}
//
//void displayMines(bool mines[][BOARD_HEIGHT], int width, int height)
//{
//
//}
//
//bool hasPlayerWon(char board[][BOARD_HEIGHT], bool mines[][BOARD_HEIGHT], int width, int height)
//{
//
//}


int main(int argc, char* argv[])
{
	// set arrays
	for (int w = 0; w < BOARD_HEIGHT; w++)
	{
		for (int h = 0; h < BOARD_HEIGHT; h++)
		{
			mines[w][h] = false;
			board[w][h] = '?';
		}
	}


	// if argc>0 debug seed 0 in rand, else use time
	if (argc > 0)
	{
		srand(0);
	}
	else
	{
		srand(time(NULL));
	}
	





	/*do
	{
		bool checkAgain = false;
		for (int i = 0; i < BOARD_X; i++)
		{
			for (int j = 0; j < BOARD_Y; j++)
			{
				if (board[i][j] == 'c')
				{
					int mineCount = 0;
					for (int k = -1; k < 1; k++)
					{
						for (int m = -1; m <= 1; m++)
						{
							mineCount++;
						}
					}
				}
				if (mineCount == 0)
				{
					board[i][j] = ' ';
					for (int k = -1; k < 1; k++)
					{
						for (int m = -1; m <= 1; m++)
						{
							if (board[i + k][j + m] == '?')
							{
								board[i + k][j + m] = 'c';
								checkAgain = true;
							}
						}
					}
				}
				else
				{
					board[i][j] = '0' + mineCount;
				}
			}
		}

	} while (checkAgain);
*/



















}
















