#include<stdio.h>

int checkwin();
void broad();
char mark, one='1', two='2', three='3', four='4', five='5', six='6' ,seven='7', eight='8', nine='9';

void main (){
	int player = 1, result = 0, invalid = 0, choice;
	
	do{
	invalid = 0;
	
	broad();
	
    printf("Player %d, enter a number:  ", player);
    scanf("%d", &choice);
	
	if (player==1)
		mark = 'X';
	else
		mark = 'O';
	
        if (choice == 1 && one == '1')
            one = mark;
            
        else if (choice == 2 && two == '2')
            two = mark;
            
        else if (choice == 3 && three == '3')
            three = mark;
            
        else if (choice == 4 && four == '4')
            four = mark;
            
        else if (choice == 5 && five == '5')
            five = mark;
            
        else if (choice == 6 && six == '6')
            six = mark;
            
        else if (choice == 7 && seven == '7')
            seven = mark;
            
        else if (choice == 8 && eight == '8')
            eight = mark;
            
        else if (choice == 9 && nine == '9')
            nine = mark;
	
        else{
            printf("Invalid move \n");

            invalid=1;
            getch();
        }	

		result = checkwin();
					
		if (player==1 && invalid==0)
			player++;
		else if (player==2 && invalid==0)
			player--;

			
	}while (result == 0);

	broad();
	
	if (player==1)
		player++;
	else
		player--;

if (result == 1)
	printf("\n==>\aPlayer %d win ", player);
else
	printf("==>\aGame draw");
}

void broad(){
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", one, two, three);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", four, five, six);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", seven, eight, nine);
	printf("     |     |     \n\n");
}

int checkwin(){
	if (one==four && four==seven)
		return 1;
	else if (two==five && five==eight)
		return 1;
	else if (three==six && six==nine)
		return 1;
	else if (one==two && two==three)
		return 1;					
	else if (four==five && five==six)
		return 1;
	else if (seven==eight && eight==nine)
		return 1;
	else if (one==five && five==nine)
		return 1;
	else if (three==five && five==seven)
		return 1;	
	else if (one!='1' && two!='2' && three!='3' && four!='4' && five!='5' && 
			 six!='6' && seven!='7' && eight!='8' && nine!='9')
		return -1;
	else
		return 0;
}
