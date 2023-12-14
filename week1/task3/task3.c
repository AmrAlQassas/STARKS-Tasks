#include <stdio.h>

void main(void){
	char x;
	printf("Please enter Character Value :\n");
	scanf("%c",&x);
	
	printf("The Character = %c \n", x);
	printf("The Ascii = %d \n", x);
	
	x--;
	printf("The Previous Character = %c \n", x);
	
	x+=2;
	printf("The Next Character = %c \n", x);
}