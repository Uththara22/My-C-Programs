#include<stdio.h>
int main(){
	
/*	& -	Bitwise	AND						A&B				
	| - Bitwise OR						A|B
	~ - Bitwise NOT(complement)			~A
	^ - Bitwise exclusive OR			A^B
	<<- Bitwise Left Shift				A<<B
	>>- Bitwise Right Shift				A>>B
	
	*/
	
	printf("Bitwise	AND : %d\n",7&13);
	printf("Bitwise OR  : %d\n",7|13);
	printf("Bitwise NOT : %d\n",~13);
	printf("Bitwise XOR : %d\n",7^13);
	
	printf("%d\n",13<<2);
	printf("%d\n",13<<5);
    printf("%d\n",13>>2);
    printf("%d\n",10>>1);
	
	return 0;
}
