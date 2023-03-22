//This Will Be The Main File

void compTurn(int* pB);
void playerTurn(int* pB);

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	int randomC, randomR, random3, i, j, z, g = 0;
	const int GSIZE = 3;
	int b[GSIZE][GSIZE] = {0}, grid[GSIZE][GSIZE];


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

	randomC = rand() % GSIZE;
	randomR = rand() % GSIZE;

	int* pB = &b[0][0];

	playerTurn(pB);

	while (g < 4)
	{

		compTurn(pB);


		playerTurn(pB);

		printf("______________________________________________________\n");
		g++;
	}

	printf("X | O | X\n--|---|--\nX | X | O\n--|---|--\nO | O | X");

	return 0;
}
void compTurn(int*pB)
{
	int f[3][3] = { *(pB + 0), *(pB + 1), *(pB + 2), *(pB + 3), *(pB + 4), *(pB + 5), *(pB + 6), *(pB + 7), *(pB + 8), };
	int i, j, h = 0, x, y, t = 0;
	const int GSIZE = 3;
	int* p;

	while (h < 1)
	{
		/*Function to generate the computers position*/
		x = rand() % GSIZE;
		y = rand() % GSIZE;

		for (i = 0; i < 3; i++)
		{
			/*Main 'for' loop*/
			for (j = 0; j < 3; j++)
			{

				/*If there is nothing in the random spot it will put its piece there*/
				if (f[y][x] == 0)
				{
					if (t == 0)
					{
						/*Showing which spot the computer picked*/
						printf("%i____%d\n", x, y);
						t++;
					}

					/*Made the computer place 1s and 2s in place of Xs and Os.*/

					if (y == 0)
					{
						if (x == 0)
						{
							*(pB + 0) = 1;
						}
						if (x == 1)
						{
							*(pB + 1) = 1;
						}
						if (x == 2)
						{
							*(pB + 2) = 1;
						}
					}
					if (y == 1)
					{
						if (x == 0)
						{
							*(pB + 3) = 1;
						}
						if (x == 1)
						{
							*(pB + 4) = 1;
						}
						if (x == 2)
						{
							*(pB + 5) = 1;
						}
					}
					if (y == 2)
					{
						if (x == 0)
						{
							*(pB + 6) = 1;
						}
						if (x == 1)
						{
							*(pB + 7) = 1;
						}
						if (x == 2)
						{
							*(pB + 8) = 1;
						}
					}

					h++;
				}
				printf("	%i", f[i][j]);
			}
			printf("\n");
		}
	}
}
void playerTurn(int* pB)
{
	int i = 0, p;
	int c1 = 1, c0 = 0, c2 = 2;
	int f[3][3] = { *(pB + 0), *(pB + 1), *(pB + 2), *(pB + 3), *(pB + 4), *(pB + 5), *(pB + 6), *(pB + 7), *(pB + 8), };



	printf("Please choose where your mark goes:  ");

	while (i < 1)
	{
		scanf_s("%i", &p);

		if (p == 1)
		{
			if (f[c0][c0] == 0)
			{
				*(pB+0) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 2)
		{
			if (f[c0][c1] == 0)
			{
				*(pB + 1) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 3)
		{
			if (f[c0][c2] == 0)
			{
				*(pB + 2) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 4)
		{
			if (f[c1][c0] == 0)
			{
				*(pB + 3) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 5)
		{
			if (f[c1][c1] == 0)
			{
				*(pB + 4) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 6)
		{
			if (f[c1][c2] == 0)
			{
				*(pB + 5) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 7)
		{
			if (f[c2][c0] == 0)
			{
				*(pB + 6) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 8)
		{
			if (f[c2][c1] == 0)
			{
				*(pB + 7) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
		else if (p == 9)
		{
			if (f[c2][c2] == 0)
			{
				*(pB + 8) = 2;
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
	}
}