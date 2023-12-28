// Function with arguments and return value

#include <stdio.h>
int CalculateSum (int n1, int n2);

int main() {				
	int num1, num2, sum;
	printf("Enters two numbers : \n");
	scanf("%d %d", &num1, &num2);

	sum=CalculateSum (num1, num2);
	printf("sum=%d", sum);
	return 0;
}

int CalculateSum (int n1, int n2){ 

	int sum;
	sum=n1+n2;
	return sum;  

}

