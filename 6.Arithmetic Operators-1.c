#include<stdio.h>
int main(){
	
	/*  Addition+
	    Subtraction-
	    Multiplication*
	    Division/            (Integer Division/floating Point Division)      - 2nd operand be nonzero
	    modulus(Remainder)   (Integer Division)                              - 2nd operand be nonzero
	    */
	    
	    printf("Addition : %d\n\n",1+2);
	    
		printf("Subtraction : %d\n\n",1-2);
		
		printf("Multiplication  : %d\n",1*2);
		printf("Multiplication  : %f\n",1.0*2);
		printf("Multiplication  : %f\n",1.0*2.0);
		printf("Multiplication  : %f\n\n",1.0*2.5);
		
		printf("Division : %d\n",9/2);
		printf("Division : %f\n",9/2.0);
		printf("Division : %f\n\n",9.0/2.0);
		
		printf("Remainder : %d\n",9%2);
	
	
	return 0;
}
