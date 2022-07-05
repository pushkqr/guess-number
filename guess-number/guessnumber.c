#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t t;
	srand((unsigned)time(&t));
	int randomNumber = rand() % 21;
	int userInput;
	int tries = 5;
		
	//intro
	printf("This is a simple guessing game\nI'll choose a number from 0-20, you just gotta guess!\n");
	printf("but......in just 5 tries! Good Luck!\n");
	
	while(tries > 0)
	{
	  printf("You have %d tries\n",tries);
	  printf("Enter your guess ~ " );
	  scanf("%d",&userInput);
	  
		if(userInput > 20 || userInput < 0)
		{
		  printf("Please enter a number in the range of 0 to 20.\n\n");
		  continue;		
		}
	  else
	  {
		if(userInput > randomNumber)
		{
		  tries--;
		  printf("Sorry! You're guessing too high\n\n");
		  continue;		
		}
		else if(userInput < randomNumber)
		{
		  tries--;
		  printf("Sorry! You're guessing too low\n\n");
		  continue;
		}	  
		else
		{
		  printf("Congratulations! You hit the BULLSEYE!\n");
		  break;
		}
	 
	   
	  }	

	}
	
	return 0;
}








