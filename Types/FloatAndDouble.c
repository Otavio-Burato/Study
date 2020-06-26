#include <stdio.h>


int main(void){

	// +     010=2    0,1011*2^2
	// 0     010      1011
	// sinal expoente mantissa
	//                
	// N=10,11
	// N=1*2¹+0*2^0+1*2^-1+1*2^-1
	// N=2+0,5+0,25
	// N=2,75

	float num = 2.75;
	int sizeF = sizeof(float);
	int sizeD = sizeof(double);

	printf("size of (float)  %d",sizeF);
	printf("size of (double) %d",sizeD);


	return(0);
}
