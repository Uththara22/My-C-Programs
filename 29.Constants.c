/*  1.Using #define preprocessor

         Declaration
	Syntax:
	#define identifier name value
	
	Example:
	#define AGE 18
	
	2.Using  const keyword
		 
		 Declaration
	Syntax:
	const data type indentifier name= value             -     identifier name=variable
	
	Example:
	const int AGE = 18; */

#include<stdio.h>
	
	#define LENGTH 10
	#define WIDTH 5
	
int main(){


	int area;

	area = LENGTH * WIDTH;
	printf("value of area: %d\n", area);

	//LENGTH=LENGTH+10;
	//LENGTH=200;
	printf("value of length: %d\n", LENGTH);

return 0;
}
