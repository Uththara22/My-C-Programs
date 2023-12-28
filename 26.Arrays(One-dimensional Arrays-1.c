#include<stdio.h>
int main(){
	
/*	     Declaration
	Syntax :
	Data_type Arrray_name[Array_size];	
	
	Example;
	int array_1[10];
	
	    Initialization
	Syntax :
	Data_type Arrray_name[Array_size]={Element1,Element2,...};
	
	Example:
	int array_1[10]={21,476,32,87,1,79,32,45,8.90};  */
	
	//Another method
/*	   Declaration
	Syntax :
	array_2[x];

		Initialization
	Syntax :
	array_2[x]=Element_n;
	
	Example:
	array_2[0] = 500;
	array_2[1] = 6;
	array_2[2] = -9;	*/       
	
	
	int numbers[10]={10,20,30,40,50,60,70,80};

	int i;
	printf("Arrys elements \n");
	for(i=0;i<10;i++)
	    printf("%d\n",numbers[i]);
	    
		                                   
	return 0;
}
