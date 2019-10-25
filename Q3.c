#include <stdio.h>

//Loops index from 100-999 and prints whenever the index is ~~something~~, can't tell what
int main(void){
	int a = 100;
	int edx;
	int ecx;
	
	while(a < 999){
		//bunch of math to find something about the index and store in eax
		
		//if eax is equal to the index value, print that value then continue
		if(eax == a){
			eax = a;
			printf("%d", eax);
		}
		
		a = a + 1;
	}
	return;
}