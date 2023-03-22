//This Will Be The Main File

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void wincheck(char grid[3][3]);

int main()
{
	int board[3][3];
	int random, i, j;
	const int RANGE = 2;

	srand(time(0));

//for (i = 0; i < 3; i++)
//{
//	for (j = 0; j < 3; j++)
//		{
//			random = rand() % RANGE;
//			printf("%i  ", random);
//		}
//		printf("\n");
//	}

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
    int choice, i;

    char mark;

    {
        player = (player % 2) ? 1 : 2;

        printf("Player %d\nStart-->", player);
        scanf_s("%d", &choice);


        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && grid[1] == '1')
            grid[1] = mark;

        else if (choice == 2 && grid[2] == '2')
            grid[2] = mark;

        else if (choice == 3 && grid[3] == '3')
            grid[3] = mark;

        else if (choice == 4 && grid[4] == '4')
            grid[4] = mark;

        else if (choice == 5 && grid[5] == '5')
            grid[5] = mark;

        else if (choice == 6 && grid[6] == '6')
            grid[6] = mark;

        else if (choice == 7 && grid[7] == '7')
            grid[7] = mark;

        else if (choice == 8 && grid[8] == '8')
            grid[8] = mark;

        else if (choice == 9 && grid[9] == '9')
            grid[9] = mark;

        else
        {
            printf("Incorrect move\n try again");

        }

        printf_s("________________\n");
        printf_s("|    |    |    |\n");
        printf_s("|   %c|  %c |  %c |\n", grid[9], grid[8], grid[7]);
        printf_s("|____|____|____|\n");
        printf_s("|    |    |    |\n");
        printf_s("|   %c|  %c |  %c |\n", grid[6], grid[5], grid[4]);
        printf_s("|____|____|____|\n");
        printf_s("|    |    |    |\n");
        printf_s("|   %c|  %c |  %c |\n", grid[3], grid[2], grid[1]);
        printf_s("|____|____|____|\n");
    }

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