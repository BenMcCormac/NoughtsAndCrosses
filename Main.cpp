//This Will Be The Main File

void compTurn(int x, int y);

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int board[3][3]={0};
	int randomC, randomR, random3, i, j, g=0;
	const int GSIZE = 3;

	//These are my random functions
	srand(time(0));
	//The random functions will be used to determine the position of the computers X/O
	randomC = rand() % GSIZE;
	randomR = rand() % GSIZE;

	
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

	compTurn(randomC, randomR);

	printf("X | O | X\n--|---|--\nX | X | O\n--|---|--\nO | O | X");

	return 0;
}
void compTurn(int x, int y)
{
	int board[3][3] = { 0 };
	int i, j, g = 0, h = 0;
	const int GSIZE = 3;

	/*While loop for maximun game turns*/
	while (g < 9)
	{

		for (i = 0; i < 3; i++)
		{
			/*Main 'for' loop*/
			for (j = 0; j < 3; j++)
			{
				while (h < 4)
				{
					/*Function to generate the computers position*/
					x = rand() % GSIZE;
					y = rand() % GSIZE;

					/*If there is nothing in the random spot it will put its piece there*/
					if (board[y][x] == 0) 
					{
						/*Showing which spot the computer picked*/
						printf("%i____%d\n", x, y);

						board[y][x] = 1;

						h++;
					}
				}
				printf("	%i", board[i][j]);
			}
			printf("\n");
		}
		printf("--------------------------------------------------\n");
		g++;
	}
}