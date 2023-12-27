#include<stdio.h>
int main(){
/*  for(Initialization;Condition;Increment or Decrement){
	
		for	(Initialization;Condition;Increment or Decrement)
		{
			......(Statements)....;
		}
			......(Statements)....; 
	}
	*/
	
	int x,y;
	
	for(x=1; x<=10; x++){
		printf("multipication table %d\n\n",x);
		
		for(y=1;y<=12;y++){
			printf("%d ",x*y);
		}
		
		printf("\n\n");
		
		
	}
	
	return 0;
}
