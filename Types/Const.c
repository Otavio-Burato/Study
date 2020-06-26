#include <stdio.h>

int main(void){
	int a = 42;
	int b = 042;
	int c = 0x42;

	printf ("a = %d\t%o\t%X\n",a,a,a);
	printf ("b = %d\t%o\t%X\n",b,b,b);
	printf ("c = %d\t%o\t%X\n",c,c,c);
	return(0);
}
