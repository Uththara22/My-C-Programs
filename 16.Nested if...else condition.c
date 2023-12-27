#include<stdio.h>
int main(){

/* if(condition){
		if(condition){
		....(Statement)....;
		}
	
		else{
		....(Statement)....;
		}  
	}
	
	else{
		if(condition){
		....(Statement)....;
		}
	
		else{
		....(Statement)....;
		}  
	}
	
	*/	
	int marks;
	
	printf("Enter your marks for paper :");
	scanf("%d",&marks);
	
	if(marks>=35){
		if(marks<=100){
			printf("Pass\n");
		}
		else{
			printf("invalid (your marks>100)\n");
		}
	}
	
	else{
		if(marks>=0){
			printf("Fail\n");
		}
		else{
			printf("invalid (your marks<0)\n");
		}
	}
	
	printf("Keep it up");
	
	
	
	return 0;
}
