#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "lab4.h"




int main()
{
	printf("My name is Gustavo Ranz \nLab Section: 287 \nThis program will be initializing an array of size n, which is asked for by the user. It will then be initialized with intergers from 1 to n. The array will then be passed to a function called randperm, in which the function will make permutations of the values in the array.");

	int numArray[ARRAYLEN];
	srand(RNG_SEED);
	int response, i, j;
	char userInput[64];
  	bool test = false;	

	while(test == false)
	{
		printf("Please enter a number between 1 to 200: ");
		fgets(userInput, 63, stdin);
		
		if( strlen(userInput) < 2 || strlen(userInput) > 4)
		{
			printf("\nInvalid value.\n");
			continue;
		}
		
		if( sscanf(userInput, "%d", &response) != 1)
		{
			test = false;	
			printf("Invalid value.\n");
			continue;
		}
		
		if(response < 1 || response > 201)
		{
			test=false;
			printf("Cannot use zero, try again please.\n");
			continue;
		}
		
		else
		response = atoi(userInput);
		test = true;
	}



	for(i=0; i<LOOPS; i++)
	{
	InitializeArray(numArray,response );
	randperm(numArray, response);

	printf("\n\nThis is the permutated list\n");
	for(j=0; j<response; j++)
	{
	printf("%d, ", numArray[j]);
	}
	
	}
} 
