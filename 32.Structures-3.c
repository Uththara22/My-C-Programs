/* 2.Array Declaration of a structure
	 Syntax:
	struct structure_name array_name[array_size];
	
	Example:
	struct book b[100];
	
#include<stdio.h>
struct book			   
{
	char *name;
	float price;
	int pages;
};

int main(){
 	
 	struct book b[100];
 	
	b[0].pages = 384;
	b[1].pages = 1240;      
	b[2].pages = 972;
	
	b[0].name = "C programming";
	b[1].name = "Poems";
	b[2].name = "Nature";
	
	return 0;
}                            

	another method 

#include<stdio.h>
struct book			   
{
	char name[25];
	float price;
	int pages;
};

int main(){
 	
 	struct book b[100] = {{"Apple", 210.50, 170},{"Physics", 500, 276}};
 	
	return 0;
}                                  */



/* Access arrays structure members
	Syntax:
	Array_name[index].member1_name;
	
	Example:
	b[0].pages;
	b[5].name;

#include<stdio.h>
struct book			   
{
	char *name;
	float price;
	int pages;
};                           */


#include<stdio.h>
struct book			   
{
	char *name;
	float price;
	int pages;
};

int main(){
 	
 	struct book b[100];
 	
	b[0].pages = 384;
	b[1].pages = 1240;      
	b[2].pages = 972;
	
	b[0].name = "C programming";
	b[1].name = "Poems";
	b[2].name = "Nature";
	
	printf("Page Count of books:\n\n");
	int i;
	for(i=0;i<3;i++)
	{
		printf("%s book has %d pages \n", b[i].name, b[i].pages);
	}
	
	return 0;
}                        
