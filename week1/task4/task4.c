#include <stdio.h>

void main(void){
	 int x ,y;
	 printf("Enter Two Numbers : \n");
	 scanf("%d %d", &x,&y);
	 
	  printf("The Addition = %d \n" ,x+y);
	  printf("The Subtraction = %d \n", x-y );
	  printf("The Multiplcation = %d \n", x*y );
	  printf("The Division = %0.3f \n", x/(float)y );

}