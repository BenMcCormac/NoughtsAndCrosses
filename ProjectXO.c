#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

char grid[10] = { '0','1','2','3','4','5','6','7','8','9'};



int main()
{
    int player = 1;
    int choice, i;

    char mark;

    {
        player = (player % 2) ? 1 : 2;

        printf("Player %d,", player);
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

            return(0);
        }

    }
}