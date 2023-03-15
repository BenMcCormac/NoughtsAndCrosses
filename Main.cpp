//This Will Be The Main File

int compTurn(int x, int y, int b[3][3]);
int playerTurn(int b[3][3]);

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int board[3][3]={0};
	int randomC, randomR, random3, i, j, g = 0;
	const int GSIZE = 3;

	//These are my random functions
	srand(time(0));

	
//Random number testing
//for (i = 0; i < 3; i++)
//{
//	for (j = 0; j < 3; j++)
//		{
//			random1 = rand() % GSIZE;
//			printf("%i  ", randomR);
//		}
//		printf("\n");
//}

	/*While loop for maximun game turns*/

	board[3][3] = playerTurn(board[3][3]);

	while (g < 4)
	{
		/*Function to generate the computers position*/
		randomC = rand() % GSIZE;
		randomR = rand() % GSIZE;

		/*Computer Turn Function*/
		board[3][3] = compTurn(randomC, randomR);
		/*Player Turn Function*/
		board[3][3] = playerTurn();

		printf("______________________________________________________\n");
		g++;
	}

	printf("X | O | X\n--|---|--\nX | X | O\n--|---|--\nO | O | X");

	return 0;
}
int compTurn(int x, int y)
{
	int b[3][3];
	int i, j, h = 0;
	const int GSIZE = 3;

		for (i = 0; i < 3; i++)
		{
			/*Main 'for' loop*/
			for (j = 0; j < 3; j++)
			{

				/*If there is nothing in the random spot it will put its piece there*/
				if (b[y][x] == 0) 
				{
					/*Showing which spot the computer picked*/
					printf("%i____%d\n", x, y);

					/*If we make the computer place 1s and the player place 2s it will be easier for Eoghan to make the loop for the grid.*/
					b[y][x] = 1;

					h++;
				}
				printf("	%i", b[i][j]);
			}
			printf("\n");
		}
		return b[3][3];
}
int playerTurn()
{
	int i = 0, p;
	int b[3][3];

	printf("Please choose where your mark goes:  ");

	while (i < 1)
	{
		scanf_s("%i", &p);

		if (p == 1)
		{
			if (b[0][0] == 0)
			{
				b[0][0] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 2)
		{
			if (b[0][1] == 0)
			{
				b[0][1] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 3)
		{
			if (b[0][2] == 0)
			{
				b[0][2] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 4)
		{
			if (b[1][0] == 0)
			{
				b[1][0] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 5)
		{
			if (b[1][1] == 0)
			{
				b[1][1] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 6)
		{
			if (b[1][2] == 0)
			{
				b[1][2] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 7)
		{
			if (b[2][0] == 0)
			{
				b[2][0] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 8)
		{
			if (b[2][1] == 0)
			{
				b[2][1] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 9)
		{
			if (b[2][2] == 0)
			{
				b[2][2] = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
	}
	return b[3][3];
}