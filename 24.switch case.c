#include<stdio.h>
int main(){
	
/* switch(choice){
	case 'constant-expression1':
	......statement.....;
		
	case 'constant-expression2':
	......statement.....;
	
	case 'constant-expression3':
	......statement.....;
	
	default;
	......statement.....;
	}
	*/
	
	int num1, num2, operation, ans;
	
	printf("Enter Number 1 :");
	scanf("%d",&num1);
	
	printf("Enter Number 2 :");
	scanf("%d",&num2);
	
	printf("\t Operations\n");
	printf("\t Addition       ->	1\n"); 
	printf("\t Subtraction    ->	2\n");
	printf("\t Multiplication ->	3\n");
	printf("\t Division       ->	4\n");
	printf("\t Remaindee      ->	5\n");
	printf("\n");
	printf("\t Choose any operation for calculate as number(ex:1) :");
	scanf("%d", &operation);
	
	switch(operation){
	
	case 1:
		ans=num1+num2;
		printf("Answer-addition : %d\n", ans);
		break;
	case 2:
		ans=num1-num2;
		printf("Answer-subtraction : %d\n", ans);	
		break;
	case 3:
		ans=num1*num2;
		printf("Answer-multiplication : %d\n", ans);	
		break;
	case 4:
		ans=num1/num2;
		printf("Answer-division : %d\n", ans);
		
	case 5:
		ans=num1%num2;
		printf("Answer-remainder : %d\n", ans);	
		
		break;
		
	default:
		printf("Your entered invalid input\n");
		
	}

	
	
	
	return 0;
}
