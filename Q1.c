#include <stdio.h>

//This program calculates and prints (3*5)-1 = 14
int main(void){
	
	//esp to 11111111 11111111 11111111 11110000
	//sub 20h, esp to 11111111 11111111 11111111 11010000
	
	//1Ch =                                3;
	//1111 1111 1111 1111  1111 1111 1101 0011
	
	//18h =                           5;
	//1111 1111 1111 1111  1111 1111 0101 0011
	
	//14h =                      0;
	//1111 1111 1111 1111  1111 0000 0101 0011
	
	int ptr1Ch = 3;
	int ptr18h = 5;

	int result = (ptr1Ch * ptr18h) - 1;
	
	printf("%d", result);
}

