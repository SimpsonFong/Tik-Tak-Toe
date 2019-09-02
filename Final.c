#include<stdio.h>
#include<stdlib.h>

char one='1',two='2',three='3',four='4',five='5',
	six='6',seven='7',eight='8',nine='9';

int checkwin();
void table();

int main(){
int choice,player=1,i=0,invalid=0;
char mark;

	do{
		invalid=0;
		
		table(); 
		
	if (player==1)
		mark = 'X';
	else
		mark = 'O';
		
	printf("Player %d, enter a number: ",player);
	scanf("%d", &choice);
	
	if(choice==1 && one=='1')
		one=mark;
	
	else if(choice==2 && two=='2')
		two=mark;
	
	else if(choice==3 && three=='3')
		three=mark;	
	
	else if(choice==4 && four=='4')
		four=mark;
	
	else if(choice==5 && five=='5')
		five=mark;
	
	else if(choice==6 && six=='6')
		six=mark;
	
	else if(choice==7 && seven=='7')
		seven=mark;
	
	else if(choice==8 && eight=='8')
		eight=mark;
	
	else if(choice==9 && nine=='9')
		nine=mark;
	
	else{
		printf("Invalid move");
		invalid=1;
		getch();
	}
		
	i=checkwin();
	
	if (player==1 && invalid==0)
			player++;
	else if (player==2 && invalid==0)
		player--;
		
	}while(i == 0);
	
	table();
	
		if (player==1)
		player++;
	else
		player--;
	
	if(i==1)
		printf("===Player %d win\n",player);
	else
        printf("==>\aGame draw");
}

int checkwin(){
	if(one==two && two==three)
		return 1;
		
	else if (four==five && five==six)
		return 1;
		
	else if (seven==eight && eight==nine)
		return 1;
		
	else if (one==four && four==seven)
		return 1;
		
	else if (two==five && five==eight)
		return 1;
		
	else if (three==six && six==nine)
		return 1;
		
	else if (one==five && five==nine)
		return 1;
		
	else if (three== five && five==seven)
		return 1;
		
	else if((one == '1' && two == '2' && three == '3' &&
        four == '4' && five == '5' && six == '6' && 
		seven == '7' && eight == '8' && nine == '9'))
        return -1;
        
    else
    	return 0;
}
void table(){
	printf("\n\nTic Tac Toe\n\n");
	printf("Player 1 = (x)\t\t-\t   Player 2(o)\n\n\n");
	
	printf("    |    |    |\n");
	printf("  %c | %c  | %c  |\n",one,two,three);
	printf("____|____|____|\n");
	printf("    |    |    |\n");
	printf("  %c | %c  | %c  |\n",four,five,six);
	printf("____|____|____|\n");
	printf("    |    |    |\n");
	printf("  %c | %c  | %c  |\n",seven,eight,nine);
	printf("    |    |    |\n");
}
