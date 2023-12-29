//2nd method
#include<stdio.h>
struct book			   
{
	char *name;
	float price;
	int pages;
};

int main(){

	struct book b1,b2,b3;
	
	b1.name = "Apple";
	b1.price = 540.50;      
	b1.pages = 367;
	
	b2.pages = 1761;
	b2.price = 250;
	b2.name = "Science";
	
	
	printf("name of b1 = %s\n", b1.name);
	printf("price of b1 = %.2f\n", b1.price);
	printf("pages of b1 = %d\n\n", b1.pages);
	
	printf("name of b2 = %s\n", b2.name);
	printf("price of b2 = %.2f\n", b2.price);
	printf("pages of b2 = %d\n\n", b2.pages);
	
	
	return 0;
}                

