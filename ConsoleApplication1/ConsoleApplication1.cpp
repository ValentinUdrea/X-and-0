#include <conio.h>
#include <stdlib.h>


char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
void draw_board();
int checkWin();



int main()
{
	int player = 1, i, choice;
	char mark; //X,O


	do {
		draw_board();
		if (player % 2)//If the value of player divided by 2 is false(1) will return true else will return false(o)
		{
			player = 1;//if true(1) player value will be 1
		}
		else
		{
			player = 2;//if false(0) player value will be 2
		}
		printf("\nPlayer %d enter the choice: ", player);
		scanf("%d", &choice);
		if (player == 1)//If value of player is equal to 1 mark = X else O
		{
			mark = 'X';

		}
		else
		{
			mark = 'O';
		}
		if (choice == 1 && square[1] == '1')
		{
			square[1] = mark;
		}
		else if (choice == 2 && square[2] == '2')
		{
			square[2] = mark;
		}
		else if (choice == 3 && square[3] == '3')
		{
			square[3] = mark;
		}
		else if (choice == 4 && square[4] == '4')
		{
			square[4] = mark;
		}
		else if (choice == 5 && square[5] == '5')
		{
			square[5] = mark;
		}
		else if (choice == 6 && square[6] == '6')
		{
			square[6] = mark;
		}
		else if (choice == 7 && square[7] == '7')
		{
			square[7] = mark;
		}
		else if (choice == 8 && square[8] == '8')
		{
			square[8] = mark;
		}
		else if (choice == 9 && square[9] == '9')
		{
			square[9] = mark;
		}
		else//In case we used an invalid option
		{
			printf("Invalid option! ");
			--player;//So that the player 1 can chose again
			getch();//Pauses the output until a key is pressed. The program doesn't close directly

		}
		i = checkWin();//It returns -1 if there is a winner, 0 draw and if the game continues
		++player;//It will change the the variable player, it will be divisible with 2 and after being incremented again it will be not divisible with 2 and so on and so on


	} while (i == -1);

	draw_board();

	if (i == 1)//after the while loop,if the value of i equals to 1 we have a winner
	{
		printf("\n==>Player %d won", --player);//


	}
	getch();
	return 0;





}

void draw_board() {
	system("cls");//Clears the screen so that the board will not be printed again
	printf("\n\n WELCOME TO  X AND O!\n\n");
	printf("Player 1 (X) - Player 2 (O) \n\n\n");
	printf(" %c | %c | %c \n", square[1], square[2], square[3]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n", square[4], square[5], square[6]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n", square[7], square[8], square[9]);


}

int checkWin()
{
	if (square[1] == square[2] && square[2] == square[3])
	{
		return 1;//retuning 1 ends the loop becouse it's condition is to be -1
	}           //This means there is a winner
	if (square[4] == square[5] && square[5] == square[6])
	{
		return 1;
	}
	if (square[7] == square[8] && square[8] == square[9])
	{
		return 1;
	}
	if (square[1] == square[5] && square[5] == square[9])
	{
		return 1;
	}
	if (square[3] == square[5] && square[5] == square[7])
	{
		return 1;
	}
	if (square[1] == square[4] && square[4] == square[7])
	{
		return 1;
	}
	if (square[2] == square[5] && square[5] == square[8])
	{
		return 1;
	}
	if (square[3] == square[6] && square[6] == square[9])
	{
		return 1;
	}
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
	{
		return 0;//This is whre all the positions are filled and it's a draw
	}

	else
	{
		return -1;//program continues
	}

}
