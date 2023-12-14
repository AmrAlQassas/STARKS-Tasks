#include <stdio.h>

void main(void){
	float x=0;
	float y=0;
	
	printf("Enter two Float numbers :\n");
	scanf("%f %f",&x,&y);
	printf("x= %0.3f y=%0.3f \n",x,y);
	
	float a=0;
	a=x;
	
	x=y;
	y=a;
	
	printf("x= %0.3f y=%0.3f\n",x,y);
}