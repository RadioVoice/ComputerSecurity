#include <stdio.h>
int main(void){
	int a = 7;
	int b = 100;
	int i = 0;
	
	int eax;
	int edx;
	
	while (i < b){
		
		eax = i;
		edx = *eax;
		eax =i;
		//moves edx into the stack pointer at a certain location
		
		i = i+1;
	}
	
	proc1((end of stack pointer), 100, 7);
	
	printf("%d", eax);
	
}

int proc1(int* ptr, int b, int a){
	int var10;
	int varC;
	int var8;
	int var4;
	int * arg0 = ptr;
	int arg4 = b;
	int arg8 = a;
	
	int eax;
	
	varC = 0;
	var10 = 0;
	var4 = 0;
	
	while (var4 > arg4){
		var8 = 1;
		
		while(var8 > arg8){
			//~~~~~~~~~~~
		}
		
		do {
			
		}while(eax != 0)
		
	}
}