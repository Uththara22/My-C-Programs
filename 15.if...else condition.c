#include<stdio.h>
int main(){
/* if(condition){
	....(Statement)....;
	}
	
	else{
	....(Statement)....;
	}
	*/
	
	int marks;
	
	printf("Enter your marks for paper :");
	scanf("%d",&marks);
	
	if(marks>=35){
		printf("PASS\n");
	}
	
	else{
		printf("FAIL\n");
	}
	
	printf("Keep it up");
	
	
	return 0;
}
