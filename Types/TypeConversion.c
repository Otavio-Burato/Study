#include<stdio.h> 

int main(void){ 
	double a;
	double b;
	double c = 8.7;
	b=c;
	a=b;

	printf("a=%d\nb=%0.20f\nc=%.20f\n",a,b,c);
	//------------------------------------//

	double x = 1.2; 

	int sum = (int)x + 1; 

	printf("sum = %d\n", sum); 
	//------------------------------------//
	long int i = 524294; // 0000 0000 0000 1000 0000 0000 0000 0110
	int h = i;//h=6 //                     0000 0000 0000 0110
	//------------------------------------//
	int step;
	int total = 256;
	double progress;

	for (step = 0; step < total; step++){
		progress = (double) step /total * 100.0;
	//             casting
	}

	return (0); 
}
