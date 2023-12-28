#include<stdio.h>
int main(){
												 
	
	int n=5;        //n=5 , n=10 - Local Variables
	{
		int n=10;
		printf("Value of n (Inner) : %d\n",n);
		
	}
	
	printf("Value of n (Outer) : %d\n", n);
	
	return 0;
}
