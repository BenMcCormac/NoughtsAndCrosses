//This Will Be The Main File

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int board[3][3]={0}, grid[3][3]={0};
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

	while (g < 9)
	{
		printf("%i____%d\n", randomC, randomC);
		printf("%i____%d\n", randomR, randomR);

		randomC = rand() % GSIZE;
		randomR = rand() % GSIZE;

		board[randomR][randomC]++;

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if(grid[randomR][randomC]=board[randomR])

				printf("	%i", board[i][j]);
			}
			printf("\n");
		}
		printf("--------------------------------------------------\n");
		g++;
	}

	return 0;
}