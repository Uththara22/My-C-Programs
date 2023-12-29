#include<stdio.h>
struct book			   
{
	char name[25];
	float price;
	int pages;
};

int main(){
 	
 	struct book b[100] = {{"Apple", 210.50, 170},{"Physics", 500, 276}};
 	
 	printf("price of b1 = %.2f\n", b[0].price);
 	printf("price of b2 = %.2f\n\n", b[1].price);
 	
 	printf("Total Amount = %.2f\n", b[0].price+b[1].price);
 	
	return 0;
}                          
