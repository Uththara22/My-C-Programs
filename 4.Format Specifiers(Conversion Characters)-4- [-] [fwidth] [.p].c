#include<stdio.h>
int main(){
	
	/* float-No. of decimal places
	   String-No. of characters */
	
	printf("Value :%10f\n",2.71828);
	printf("Value :%10.2f\n",2.71828);
	printf("Value :%-10.2f\n",2.71828);
	printf("Value :%2.4f\n",2.71828);	 //overspill
	printf("Value :%.4f\n",2.71);
	printf("Value :%10.4f\n",2.71);
	printf("Value :%.4f\n\n\n\n",-2.71);
	
	
	printf("Value :%s\n","coding");
	printf("Value :%7s\n","coding");
	printf("Value :%7.2s\n","coding");
	printf("Value :%-7.2s\n","coding");
	printf("Value :%.2s\n","coding");
	
	return 0;
}
