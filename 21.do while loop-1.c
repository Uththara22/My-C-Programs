#include<stdio.h>
int main(){

/* 	do
	{
	......(statement)....;
	Increment or Decrement;
	
	}while(Condition);
	*/
	
	
	int x=5;
	
	do {
		printf("%d\n",x);
		x=x+5;
		
	}while(x<=1000);
	
	
	
	return 0;
}
