#include<stdio.h>
int main(){
	
	/* if(condition1){
		....(Statement)....;
		....(Statement)....;
		}
	
		else if (condition2){
		....(Statement)....;
		}  
	
	
	    else if(condition3){
		....(Statement)....;
	    }
	
		else{
		....(Statement)....;
		}  
	
	*/	
	
	int marks;
	
	printf("Enter your marks for paper :");
	scanf("%d",&marks);
	
	if(marks>=35&&marks<=100){
		printf("Pass\n");
		}
	
	else if (marks<35&&marks>=0){
		printf("Fail\n");
		}  
	
	
	else {
		printf("Invalid\n");
		
	    }
	
	printf("Keep it up");
	
	
	
	
	return 0;
}
