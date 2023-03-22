#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

char grid[10] = { '0','1','2','3','4','5','6','7','8','9'};



int main()
{
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
            
            system('cls');
        }
    
     return(0);
}
