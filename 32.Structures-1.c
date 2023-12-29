/* Structure Declaration
	 Syntax:
	struct structure_name{
	   	data type member1_name;  	
		data type member2_name;
		data type member3_name;
		.......
		data type memberN_name;
	};
		
	 Example:
	struct book{
	    char*name;
	    float price;
	    int pages;
	};						
	
 #include<stdio.h>
struct book				    -
{
	char name[25];              Global structure
	float price;
	int pages;             
};                          -

int main(){
	
	return 0;
}                           
	          

#include<stdio.h>
int main(){
       
    struct book               -
	{     char name[25];          Local structure
		  float price;  
		  int pages;
    };                        -    
    return 0;
}                                                */




//-----------------------------------------------------------


/* 1.Variable Declaration of a structure
	 Syntax:
	struct structure_name variable_name1,variable name2,....;
	
	Example:
	struct book b1,b2,b3; 


#include<stdio.h>
struct book			   
{
	char name[25];
	float price;
	int pages;
};

int main(){

	struct book b1,b2,b3;     //b1,b2,b3-Local variables
	
	return 0;
}                


#include<stdio.h>
struct book			 
{
	char name[25];
	float price;
	int pages;
}b1,b2,b3;                   //b1,b2,b3-Global variables

int main(){

	
	return 0;
}                


/*Assign values to structure members  -1st method
	Syntax:
   struct structure_name variable_name={value for member1, value for member2,...};
   
   Example
   struct book b1={"Apple", 210.50, 170};
   struct book b2={"Black", 590.00, 98}; 
   
#include<stdio.h>
struct book			   
{
	char *name;
	float price;
	int pages;
};

int main(){

	b1.name = "Apple";
	b1.price = 540.50;      
	b1.pages = 367;
	
	b2.pages = 1761;
	b2.price = 250;
	b2.name = "Science";
	
	return 0;
}                

   Assign values to structure members  -2nd method
     Syntax:
     Variable_name.member_name = value;
     
     Example:
     b1.name = "Apple";
     b1.price = 540.50;
     
#include<stdio.h>
struct book			   
{
	char name[25];
	float price;
	int pages;
};

int main(){

	struct book b1= {"Apple", 210.50, 170};
	struct book b2= {"Black", 590.00, 98};      
	struct book b3= {"Fairy", 1050.00, 476};
	
	return 0;
}                                                */


/* Access structure members
	Syntax:
	Variable_name1.member1_name;
	Variable_name1.member2_name;
	Variable_name1.member3_name;
	 
	Example:
	b1.name;
	b1.price
	b1.pages;                                    */
	
	
 //1st method	
#include<stdio.h>              
struct book			   
{
	char name[25];
	float price;
	int pages;
};

int main(){

	struct book b1= {"Apple", 210.50, 170};
	struct book b2= {"Black", 590.00, 98};      
	struct book b3= {"Fairy", 1050.00, 476};
	
	printf("name of b1 = %s\n", b1.name);
	printf("price of b1 = %.2f\n", b1.price);
	printf("pages of b1 = %d\n\n", b1.pages);
	
	printf("name of b2 = %s\n", b2.name);
	printf("price of b2 = %.2f\n", b2.price);
	printf("pages of b2 = %d\n\n", b2.pages);
	
	return 0;
}                    	        
