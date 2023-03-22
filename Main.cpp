//This Will Be The Main File

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void wincheck(char grid[3][3]);

int main()
{
	int randomC, randomR, random3, i, j, z, g = 0;
	const int GSIZE = 3;
	char b[GSIZE][GSIZE] = {0};


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

		compTurn(pB);
		wincheck(b);

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

		playerTurn(pB);
		wincheck(b);

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

	wincheck(b);

	return 0;
}

void wincheck(char grid[3][3]) {
	// Call this function with wincheck(board); in int main()
	int i, j, k, l; // i is the variable for rows, j is the variable for columns, k is the variable for checking the first diagonal, l is the variable for checking the second diagonal
	char human[15] = "";
	for (i = 0; i <= 2; i++) // Checks each row
	{
		for (j = 0; j < 2; j++)
		{
			if (grid[i][j] != grid[i][j + 1])
				break;
			else if (grid[i] == "X" || grid[i] == "x")
				printf("Computer won with row number %i", i + 1); // Should modify printf statements in all three nested for loops to indicate if computer or player won
			else if (grid[i] == "O" || grid[i] == "o")
				printf("%c won with row number %i", human[14], i + 1);
		}
	}

	for (j = 0; j <= 2; j++) // Checks each column
	{
		for (i = 0; i < 2; i++)
		{
			if (grid[i][j] != grid[i + 1][j])
				break;
			else if (grid[j] == "X" || grid[j] == "x")
				printf("Computer won with column number %i", j + 1); // Should modify printf statements in all three nested for loops to indicate if computer or player won
			else if (grid[j] == "O" || grid[j] == "o")
				printf("%c won with column number %i", human[14], j + 1);
		}
	}

	for (k = 0; k <= 1; k++)
	{
		if (grid[k][k] != grid[k + 1][k + 1])
			break;
		else if (grid[k] == "X" || grid[k] == "x")
			printf("Computer won with descending diagonal from left to right"); // Should modify printf statements in all three nested for loops to indicate if computer or player won
		else if (grid[k] == "O" || grid[k] == "o")
			printf("%c won with descending diagonal from left to right", human[14]);
	}

	for (l = 2; l >= 1; l--)
	{
		if (grid[l][l] != grid[l - 1][l - 1])
			break;
		else if (grid[l] == "X" || grid[l] == "x")
			printf("Computer won with ascending diagonal from left to right"); // Should modify printf statements in all three nested for loops to indicate if computer or player won
		else if (grid[l] == "O" || grid[l] == "o")
			printf("%c won with ascending diagonal from left to right", human[14]);
	}
}