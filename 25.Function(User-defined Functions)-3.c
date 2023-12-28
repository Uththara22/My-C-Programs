// Function no arguments and no return value

#include <stdio.h>
int CalculateSum ();

int main() {

	CalculateSum ();
	return 0;
}

int CalculateSum(){
					
	int n1, n2, sum;
	printf("Enter two numbers : \n");
	scanf("%d %d", &n1, &n2);

	sum=n1+n2;
	printf("Sum = %d\n", sum);
	
}
 



