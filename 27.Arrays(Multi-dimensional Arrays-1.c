#include<stdio.h>
int main(){
	  
//Two-dimensional Array
	
/*	     Declaration
	Syntax :
	Data_type Arrray_name[Array_size1][Array_size2];	
	
	Example;
	int array_1[3][4];
	
	    Initialization
	Syntax :
	Data_type Arrray_name[Array_size][Array_size2]={{E1,E2,..},{E3,E4,..},{E5,E6,..},...};
	
	Example:
	int array_1[3][4]={{21,6,32,87},{1,79,2,4},{8,90,0,1}};  */
	
	//Another method
/*		Declaration
	Syntax :
	array_2[x][y];

		Initialization
	Syntax :
	array_2[x][y]=Element_n;
	
	Example:
	array_2[0][2] = 500;
	array_2[1][4] = 6;
	array_2[2][2] = -9;	*/     
	
	
//Three-dimensional Array	
	  
/*	Example;
	int array_1[3][2][4];  */
	
	
	
	int numbers[3][4]= {{21, 6, 32, 87}, {1, 79, 2, 4}, {8, 90, 0, 1}}; 

	int i,j;
	printf("Arrys Elements\n");
	for(i=0;i<3;i++){
		
		printf("------------------------\n");
		for(j=0;j<4;j++){
			printf("%d\n",numbers[i][j]);
		}
	}
	
	    
		                                   
	return 0;
}
	
	
	
	
	
	
	

