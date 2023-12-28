/* 	User-defined Funtions
	Syntax:
	return_type function_ name(data_type parameter1,data_type parameter2,..){
		.....(statements)....;
}   
	Example :
	int CalculateSum(int n1,int n2){
	sum=n1+n2;
	return sum;
}	

 	Declaration of a Function
	Syntax:
	return_type function_ name(data_type parameter1,data_type parameter2,..);
	
	Example :
	int CalculateSum(int n1,int n2);
	
	
	Calling a function
	Syntax;
	function_ name(parameter1,parameter2,...);
	
	Example:
	CalculateSum(num1,num2);      */
	
#include <stdio.h>
int add(int a, int b);		// Declaration of function

int main() {				// Main function
	int num1, num2, sum;
	printf("Enters two numbers : \n");
	scanf("%d %d", &num1, &num2);

	sum=add (num1, num2);	// function call
	printf("sum=%d", sum);
	return 0;
}

int add(int a, int b){ 		// function declarator (User-defined function)

/* Start of function definition */
	int addition;
	addition=a+b;
	return addition;        // return statement of function

/* End of function definition */

}


/*	Types of User-defined Functions
-Function with no arguments and no return value
-Function with no arguments and no return value
-Function with arguments and return value
-Function with  arguments and return value   */
