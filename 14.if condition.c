#include<stdio.h>
int main(){
	
/*  if(condition){
	.....(statement)....;	
	.....(statement)....;	
	}
	*/
	
	int marks;
	
	printf("Enter your marks for paper :");
	scanf("%d",&marks);
	
	if(marks>=35){
		printf("PASS\n");
	}
	
	printf("keep it up");
	
	return 0;
}
