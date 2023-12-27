#include<stdio.h>
int main(){
	
/*	=       a=b		
	+=		a+=b		a=a+b
	-=		a-=b		a=a-b
	*=		a*=b		a=a*b
	/=		a/=b		a=a/b
	%=		a%=b		a=a%b    */
	
	int x=0;
	
	printf("Value of x :%d\n",x);
	
	x+=10; //x=x+10 (x=0+10)
	printf("Value of x :%d\n",x);
	
	printf("Value of x :%d",x-=5);   //x=x-5 (x=10-5)
	
	
	
	
	
	
	
	return 0;
}
