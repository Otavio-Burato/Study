#include <stdio.h>

int main(void){

	int x = 6;
	int y;
	int *p;

	p = &x; // p -> x
	*p = 2; // x = 2
	y = *p; // y = 2
//  y = p   // y -> &p -> x

	printf("x = %d\ny = %d\np = %d",x,y,p);

return (0);
}
