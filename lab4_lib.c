#include "lab4.h"
#include <stdio.h>


void InitializeArray(int *numArray, const int length)
{
	int j;
	int k=1;
	printf("\n\nThis is the original array: \n");
	for(j=0; j<length; j++)
	{
		numArray[j] = k;
		k = k+1;
		printf("%d, ", numArray[j]);
	}
}



void randperm(int *a, const int n)
{
	int i, rand_val, temp;
		i=n;
	rand_val=random()%n+1;	
	for(i=n-1; i>=0; i--)
	{
		temp= a[rand_val];		
		a[rand_val] = a[i];
		a[i] =temp;	
	}




}
