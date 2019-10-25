#include <stdio.h>
int main(void){
	int a = 100;
	int edx;
	int ecx;
	
	while(a < 999){
		ecx = a;
		edx = 1374389535;
		eax = ecx;
		eax = eax * edx;
		edx = edx / 32;
		
		eax = ecx;
		eax = eax / 31;
		
		edx = edx - eax;
		
		if(eax == a){
			eax = a;
			printf("%d", eax);
		}
		
		a = a + 1;
	}
	
	eax = 0;
	return;
}