//This Will Be The Main File

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void wincheck(char grid[3][3]);

int main()
{


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