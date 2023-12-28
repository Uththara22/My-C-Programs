#include<stdio.h>
int main(){
	
/*     Characters
	 @ $ % ( + : ] > ? "
	 A N O Y P K E Q Z 
	 a j o i k e y w p t s 
	 1 5 8 9 0 3 6 9 4 7                                
	
	char letter = 'L';
	%c                       */
	
/*    Strings
	"Gold = $35"
	
       Declaration
	Syntax :
	Data_type String_name[Array_size];        -       Data type=char	
	
	Example :
	char cost[50];
	
	  
	  Initialization
	Syntax :
	Data_type String_name[Array_size]=".........";
	
	Example :
	char cost[50] = "Gold=$35";
	
	 Initialization another method
	Syntax :
	Data_type String_name[Array_size]={'c1','c2',...,'\0'};
	
	Example ;
	char cost[50] = {'G','o','l','d',",'=',",'$','3','5','\0'};   */
	

	char name [50]="kp coding";

	printf("Welcome all to %s ",name);

	printf("\n-------------------\n");

	printf("Character in the string\n");
	int i;
	for (i=0;name[i]!='\0';i++){
	
        printf("name [%d] = %c\n", i, name[i]);
	
	}

	return 0;
}
