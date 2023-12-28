#include<stdio.h>
int main(){
	
	// Variables(According to Scope Rules)     -   1.Local Variables , 2.Global Variables
												 
	
	int n1,n2;        //n1,n2,sum - Local Variables
	n1=3;
	n2=2;
	
	int sum=n1+n2;
	printf("Addition : %d", sum);
	
	
	
	return 0;
}
