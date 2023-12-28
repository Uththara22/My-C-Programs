#include<stdio.h>
int main(){
	
/*     Declaration
	Syntax:
	Data_type*Pointer_name;
	
	Example:
	int*name;
	
		Initialization
	Syntax:
	Pointer_name = &Variable_name;
	
	Example:
	ptn = &age;
	//Another method
	int*ptx= &num;		*  -  Dereference operator
						&  -  Reference operator       */
						

	int n = 198;

	printf("Value of Variable n: %d\n", n);
	printf("Address of Variable n : %p\n", &n) ;


	int *ptn;
	ptn = &n;

	printf("\n\n");
	printf("Value of Variable n: %d\n", *ptn);
	printf("Address of Variable n: %p\n", ptn);

						
	
	return 0;
	
}
