#include<stdio.h>
int main(){
	
/*  &&   AND    A&&B
	||	 OR		A||B
	!    NOT    !A
	
	*/
	
	//out put = true or fales 	true=1,fales=0
	
	printf(" AND Operator :\n");
	printf("%d\n",0&&0);
	printf("%d\n",234&&0);
	printf("%d\n",0&&100);
	printf("%d\n",234&&100);
	
	printf(" OR Operator :\n");
	printf("%d\n",0||0);
	printf("%d\n",234||0);
	printf("%d\n",0||100);
	printf("%d\n",234||100);
	
	printf(" NOT Operator :\n");
	printf("%d\n",!0);
	printf("%d\n",!234);
		
	return 0;
}
