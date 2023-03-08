//This Will Be The Main File

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int board[3][3];
	int random, i, j;
	const int RANGE = 2;

	srand(time(0));
	random = rand();

//for (i = 0; i < 3; i++)
//{
//	for (j = 0; j < 3; j++)
//		{
//			random = rand() % RANGE;
//			printf("%i  ", random);
//		}
//		printf("\n");
//	}

	return 0;
}