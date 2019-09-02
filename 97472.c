#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char number[9]={'1','2','3','4','5','6','7','8','9'};
int numInput=0;
int player=1;
int win=0;

int checkWin()
{
    if(number[0]=='X'&&number[1]=='X'&&number[2]=='X')
    {
        numInput=10;
        printf("\nPlayer 1 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[0]=='O'&&number[1]=='O'&&number[2]=='O')
    {
        numInput=10;
        printf("\nPlayer 2 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[3]=='X'&&number[4]=='X'&&number[5]=='X')
    {
        numInput=10;
        printf("\nPlayer 1 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[3]=='O'&&number[4]=='O'&&number[5]=='O')
    {
        numInput=10;
        printf("\nPlayer 2 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[6]=='X'&&number[7]=='X'&&number[8]=='X')
    {
        numInput=10;
        printf("\nPlayer 1 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[6]=='O'&&number[7]=='O'&&number[8]=='O')
    {
        numInput=10;
        printf("\nPlayer 2 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[0]=='X'&&number[3]=='X'&&number[6]=='X')
    {
        numInput=10;
        printf("\nPlayer 1 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[0]=='O'&&number[3]=='O'&&number[6]=='O')
    {
        numInput=10;
        printf("\nPlayer 2 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[1]=='X'&&number[4]=='X'&&number[7]=='X')
    {
        numInput=10;
        printf("\nPlayer 1 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[1]=='O'&&number[4]=='O'&&number[7]=='O')
    {
        numInput=10;
        printf("\nPlayer 2 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[2]=='X'&&number[5]=='X'&&number[8]=='X')
    {
        numInput=10;
        printf("\nPlayer 1 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[2]=='O'&&number[5]=='O'&&number[8]=='O')
    {
        numInput=10;
        printf("\nPlayer 2 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[0]=='X'&&number[4]=='X'&&number[8]=='X')
    {
        numInput=10;
        printf("\nPlayer 1 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[0]=='O'&&number[4]=='O'&&number[8]=='O')
    {
        numInput=10;
        printf("\nPlayer 2 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[2]=='X'&&number[4]=='X'&&number[6]=='X')
    {
        numInput=10;
        printf("\nPlayer 1 win!\n");
        player=0;
        return win=1;
    }
    else
        if(number[2]=='O'&&number[4]=='O'&&number[6]=='O')
    {
        numInput=10;
        printf("\nPlayer 2 win!\n");
        player=0;
        return win=1;
    }

}
void board()
{
    printf("\t\t\t\t\tTic Tac Toe\n\n");
    printf("\t\t\t\tPlayer 1 -- (X),Player 2 -- (O)\n\n");
    printf("\t\t\t\t        |        |\n");
    printf("\t\t\t\t    %c   |    %c   |    %c     \n",number[0],number[1],number[2]);
    printf("\t\t\t\t        |        |\n");
    printf("\t\t\t\t _______|________|________\n");
    printf("\t\t\t\t        |        |\n");
    printf("\t\t\t\t    %c   |    %c   |    %c     \n",number[3],number[4],number[5]);
    printf("\t\t\t\t        |        |\n");
    printf("\t\t\t\t _______|________|________\n");
    printf("\t\t\t\t        |        |\n");
    printf("\t\t\t\t    %c   |    %c   |    %c     \n",number[6],number[7],number[8]);
    printf("\t\t\t\t        |        |\n");
    printf("\t\t\t\t        |        |\n");
}
int main()
{
    int arrayValue;


    while(numInput<9)
    {
        if(player==1)
        {
            board();
            again2:
			printf("\nPlayer 1 Please select a number !  ");
            scan:
			scanf("%d",&arrayValue);
            if(arrayValue<=9&&arrayValue>0)
            {
                arrayValue--;
                if(number[arrayValue]!='X'&&number[arrayValue]!='O')
                {
                    number[arrayValue]='X';
                    system("cls");
                    board();
                    checkWin();
                    if(win!=1)
                    {
                        system("cls");
                        player=2;
                    }
                }
                else
                    if(number[arrayValue]=='X'||number[arrayValue]=='O')
                    {
                        system("cls");
                        board();
                        printf("Incorrect choice Player 1\n");
                        printf("Please try again!\n");
                        goto again2;
                        numInput--;
                    }
            }
            else
            {
                system("cls");
                board();
                printf("Please select number (1-9) ");
                goto scan;
            }
        }
        if(player==2)
        {
            board();
            again:
			printf("\nPlayer 2 Please select a number !  ");
            scan2:
			scanf("%d",&arrayValue);
            arrayValue--;
            if(arrayValue<=9&&arrayValue>0)
            {
                    if(number[arrayValue]!='X'&&number[arrayValue]!='O')
                {
                    number[arrayValue]='O';
                    system("cls");
                    board();
                    checkWin();
                    if(win!=1)
                    {
                        system("cls");
                        player=1;
                    }
                }
                else
                    if(number[arrayValue]=='X'||number[arrayValue]=='O')
                    {
                        system("cls");
                        board();
                        printf("Incorrect choice Player 2\n");
                        printf("Please try again!\n");
                        goto again;
                        numInput--;
                    }
            }
            else
            {
                system("cls");
                board();
                printf("Please select number (1-9) ");
                goto scan2;
            }
        }
        numInput++;
    }

    return 0;
}
