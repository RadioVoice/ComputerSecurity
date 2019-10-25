#include <stdio.h>
int main(void){
	
	int x = [12,15,221,3,432,54,16,67];
	int i = 0;
	int j = 0;
	
	int eax;
	
	while(j <= 7){
		eax = x[j];
		
		if(eax <= i){
			j = j+1;
		}
		else{
			eax = x[j];
			i = eax;
		}
		
	}
	eax = i;
	printf("%d", eax);
    
}


//This program finds the largest number in an array and prints it out