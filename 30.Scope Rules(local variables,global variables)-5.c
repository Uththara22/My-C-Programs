#include<stdio.h>

int n=70;         //n=7 - Global Variable

int main(){
												 
	printf("Value of n (before) : %d\n", n);
	
	int n=50;     //n=50 - Local Variable
	printf("Value of n (after)  : %d\n", n);
	
	
	
	return 0;
}
