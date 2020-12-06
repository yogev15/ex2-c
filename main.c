#include<stdio.h>
#include "myBank.c"


int main()
{
	char action = '1';
	while(action != 'E')
	{
		printf("please choose a transaction type: \n O - open acount \n B - balnce inquiry \n D deposit \n W - Withdrawal \n C - Close acount \n I - Interest \n P - Print \n E - Exit \n"); 
		int check = scanf(" %c ", &action);
		if(check != 1)
			printf("Invalid transaction type \n"); 
		else if(action == 'O')
		{
			open_account();
			printf("\n");
		}
		else if(action == 'B')
		{
			balance_inquiry();
			printf("\n");
		}
		else if(action == 'D')
		{
			deposit();
			printf("\n");
		}
		else if(action == 'W')
		{
			withdrawal();
			printf("\n");
		}
		else if(action == 'C')
		{
			close_account();
			printf("\n");
		}
		else if(action == 'I')
		{
			interest();
			printf("\n");
		}
		else if(action == 'P')
		{
			printAll();
			printf("\n");
		}
		else if(action == 'E')
			close();
		else 
			printf("Invalid transaction type \n \n"); 
			
	}
	return 0;
}
