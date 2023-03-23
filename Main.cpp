//This Will Be The Main File

void compTurn(char* pB);
void playerTurn(char* pB);

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int wincheck(char* pB);

int main()
{
	int randomC, randomR, random3, i, j, z, g = 0;
	const int GSIZE = 3;
	char b[GSIZE][GSIZE] = { 0 };
	int winCheck = 0;


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

	char grid[10] = { '0','1','2','3','4','5','6','7','8','9' };

	printf_s("[~~~~~~~~~~~~~~~~~~~~~~~~~~~~]\n");
	printf_s("[ _______  _____  ______     ] \n");
	printf_s("[    |       |    |          ] \n");
	printf_s("[    |       |    |          ] \n"),
		printf_s("[    |       |    |          ] \n");
	printf_s("[    |     __|__  |_____     ] \n");
	printf_s("[                            ] \n");
	printf_s("[ _______  _____  ______     ] \n");
	printf_s("[    |    |    |  |          ] \n");
	printf_s("[    |    |____|  |          ] \n");
	printf_s("[    |    |    |  |          ] \n");
	printf_s("[    |    |    |  |_____     ] \n");
	printf_s("[                            ] \n");
	printf_s("[ _______  _____  ______     ] \n");
	printf_s("[    |     |   |  |          ] \n");
	printf_s("[    |     |   |  |_____     ] \n");
	printf_s("[    |     |   |  |          ] \n");
	printf_s("[    |     |___|  |_____     ] \n");
	printf_s("[~~~~~~~~~~~~~~~~~~~~~~~~~~~~] \n");
	printf_s("                               \n");

	int player = 1;
	int choice;

	char mark;



	printf_s("________________\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[0][0], b[0][1], b[0][2]);
	printf_s("|____|____|____|\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[1][0], b[1][1], b[1][2]);
	printf_s("|____|____|____|\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[2][0], b[2][1], b[2][2]);
	printf_s("|____|____|____|\n");


	randomC = rand() % GSIZE;
	randomR = rand() % GSIZE;

	char* pB = &b[0][0];

	playerTurn(pB);

	while (g < 4)
	{
		printf_s("________________\n");
		printf_s("|    |    |    |\n");
		printf_s("|   %c|  %c |  %c |\n", b[0][0], b[0][1], b[0][2]);
		printf_s("|____|____|____|\n");
		printf_s("|    |    |    |\n");
		printf_s("|   %c|  %c |  %c |\n", b[1][0], b[1][1], b[1][2]);
		printf_s("|____|____|____|\n");
		printf_s("|    |    |    |\n");
		printf_s("|   %c|  %c |  %c |\n", b[2][0], b[2][1], b[2][2]);
		printf_s("|____|____|____|\n");

		if (winCheck == 1)
		{
			return 0;
		}

		compTurn(pB);
		winCheck = wincheck(pB);

		printf_s("________________\n");
		printf_s("|    |    |    |\n");
		printf_s("|   %c|  %c |  %c |\n", b[0][0], b[0][1], b[0][2]);
		printf_s("|____|____|____|\n");
		printf_s("|    |    |    |\n");
		printf_s("|   %c|  %c |  %c |\n", b[1][0], b[1][1], b[1][2]);
		printf_s("|____|____|____|\n");
		printf_s("|    |    |    |\n");
		printf_s("|   %c|  %c |  %c |\n", b[2][0], b[2][1], b[2][2]);
		printf_s("|____|____|____|\n");

		if (winCheck == 1)
		{
			return 0;
		}

		playerTurn(pB);
		winCheck = wincheck(pB);

		printf("______________________________________________________\n");
		g++;
	}

	printf_s("________________\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[0][0], b[0][1], b[0][2]);
	printf_s("|____|____|____|\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[1][0], b[1][1], b[1][2]);
	printf_s("|____|____|____|\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[2][0], b[2][1], b[2][2]);
	printf_s("|____|____|____|\n");

	if (winCheck == 1)
	{
		return 0;
	}

	winCheck = wincheck(pB);

	printf_s("________________\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[0][0], b[0][1], b[0][2]);
	printf_s("|____|____|____|\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[1][0], b[1][1], b[1][2]);
	printf_s("|____|____|____|\n");
	printf_s("|    |    |    |\n");
	printf_s("|   %c|  %c |  %c |\n", b[2][0], b[2][1], b[2][2]);
	printf_s("|____|____|____|\n");

	if (winCheck == 1)
	{
		return 0;
	}
	else
	{
		printf("It is a tie");
	}

	return 0;
}
void compTurn(char* pB)
{
	char f[3][3] = { *(pB + 0), *(pB + 1), *(pB + 2), *(pB + 3), *(pB + 4), *(pB + 5), *(pB + 6), *(pB + 7), *(pB + 8), };
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
							*(pB + 0) = 'X';
						}
						if (x == 1)
						{
							*(pB + 1) = 'X';
						}
						if (x == 2)
						{
							*(pB + 2) = 'X';
						}
					}
					if (y == 1)
					{
						if (x == 0)
						{
							*(pB + 3) = 'X';
						}
						if (x == 1)
						{
							*(pB + 4) = 'X';
						}
						if (x == 2)
						{
							*(pB + 5) = 'X';
						}
					}
					if (y == 2)
					{
						if (x == 0)
						{
							*(pB + 6) = 'X';
						}
						if (x == 1)
						{
							*(pB + 7) = 'X';
						}
						if (x == 2)
						{
							*(pB + 8) = 'X';
						}
					}

					h++;
				}
			}
		}
	}
}
void playerTurn(char* pB)
{
	int i = 0, p;
	int c1 = 1, c0 = 0, c2 = 2;
	char f[3][3] = { *(pB + 0), *(pB + 1), *(pB + 2), *(pB + 3), *(pB + 4), *(pB + 5), *(pB + 6), *(pB + 7), *(pB + 8), };



	printf("Please choose where your mark goes:  ");

	while (i < 1)
	{
		scanf_s("%i", &p);

		if (p == 1)
		{
			if (f[c0][c0] == 0)
			{
				*(pB + 0) = 'O';
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
				*(pB + 1) = 'O';
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
				*(pB + 2) = 'O';
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
				*(pB + 3) = 'O';
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
				*(pB + 4) = 'O';
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
				*(pB + 5) = 'O';
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
				*(pB + 6) = 'O';
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
				*(pB + 7) = 'O';
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
				*(pB + 8) = 'O';
				i++;
			}
			else
			{
				printf("Invalid Choice, please pick again: ");
			}
		}
	}
}
int wincheck(char* pB) {
	// Call this function with wincheck(board); in int main()
	int i, j, k, l; // i is the variable for rows, j is the variable for columns, k is the variable for checking the first diagonal, l is the variable for checking the second diagonal
	int wC = 0;
	char human[15] = "Player";
	char grid[3][3] = { *(pB + 0), *(pB + 1), *(pB + 2), *(pB + 3), *(pB + 4), *(pB + 5), *(pB + 6), *(pB + 7), *(pB + 8), };

	for (i = 0; i <= 2; i++) // Checks each row
	{
		for (j = 0; j <= 2; j++)
		{
			if (grid[i][j] != grid[i][j + 1])
			{
				break;
			}
			else if (grid[i][0] == 'X' && grid[i][1] == 'X' && grid[i][2] == 'X')
			{
				printf("Computer won with row number %i\n", i + 1); // Should modify printf statements in all three nested for loops to indicate if computer or player won
				wC = 1;
				break;
			}
			else if (grid[i][0] == 'O' && grid[i][1] == 'O' && grid[i][2] == 'O')
			{
				printf("%c won with row number %i\n", human[14], i + 1);
				wC = 1;
				break;
			}
		}
	}

	for (j = 0; j <= 2; j++) // Checks each column
	{
		for (i = 0; i <= 2; i++)
		{
			if (grid[i][j] != grid[i + 1][j])
			{
				break;
			}
			else if (grid[0][j] == 'X' && grid[1][j] == 'X' && grid[2][j] == 'X')
			{
				printf("Computer won with column number %i\n", j + 1); // Should modify printf statements in all three nested for loops to indicate if computer or player won
				wC = 1;
				break;
			}
			else if (grid[0][j] == 'O' && grid[1][j] == 'O' && grid[2][j] == 'O')
			{
				printf("%c won with column number %i\n", human[14], j + 1);
				wC = 1;
				break;
			}
		}
	}

	for (k = 0; k <= 1; k++)
	{
		if (grid[k][k] != grid[k + 1][k + 1])
		{
			break;
		}
		else if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
		{
			printf("Computer won with descending diagonal from left to right\n"); // Should modify printf statements in all three nested for loops to indicate if computer or player won
			wC = 1;
			break;
		}
		else if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O')
		{
			printf("%c won with descending diagonal from left to right\n", human[14]);
			wC = 1;
			break;
		}
	}

	for (l = 2; l >= 1; l--)
	{
		if (grid[l][l] != grid[l - 1][l - 1])
		{
			break;
		}
		else if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X')
		{
			printf("Computer won with ascending diagonal from left to right\n"); // Should modify printf statements in all three nested for loops to indicate if computer or player won
			wC = 1;
			break;
		}
		else if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O')
		{
			printf("%c won with ascending diagonal from left to right\n", human[14]);
			wC = 1;
			break;
		}
	}

	return wC;
}