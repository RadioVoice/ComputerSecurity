#include <stdio.h>
int main(void){
	
	int x = [12,15,221,3,432,54,16,67];
	int max = 0;
	int i = 0;
	
	while(i <= 7){
		
		if(x[i] > max){
			max = x[i];
		}
		
		i = i+1;
	}
	
	printf("%d", i);
}


//This program loops through the array and prints the highest value, 221.