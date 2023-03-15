//This Will Be The Main File

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void wincheck(char grid[3][3]);

int main()
{


	return 0;
}

void wincheck(char grid[3][3]) {
	// Call this function with wincheck(board); in int main()
	int i, j, k, l; // i is the variable for rows, j is the variable for columns, k is the variable for checking the first diagonal, l is the variable for checking the second diagonal

	for (i = 0; i <= 2; i++) // Checks each row
	{
		for (j = 0; j < 2; j++)
		{
			if (grid[i][j] != grid[i][j + 1])
				break;
			printf("Player won with row number %i", i + 1); // Should modify printf statements in all three nested for loops to indicate if computer or player won
		}
	}

	for (j = 0; j <= 2; j++) // Checks each column
	{
		for (i = 0; i < 2; i++)
		{
			if (grid[i][j] != grid[i + 1][j])
				break;
			printf("Player won with column number %i", j + 1);
		}
	}

	for (k = 0; k <= 1; k++)
	{
		if (grid[k][k] != grid[k + 1][k + 1])
			break;
		printf("Player won with descending diagonal from left to right");
	}

	for (l = 2; l >= 1; l--)
	{
		if (grid[l][l] != grid[l - 1][l - 1])
			break;
		printf("Player won with ascending diagonal from left to right");
	}
}