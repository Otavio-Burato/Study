#include <stdio.h>

int main(void){
	int i;
	int num = 1;
	int size = sizeof(int);
	int sizeUnSigned = sizeof(unsigned int);


	for(i=0 ; i < 32 ; i++){
		printf("%d\n",num << i);
	}

	printf("Size of (int) is: %d\n",size);
	printf("Unsigned is: %d\n",sizeUnSigned);
	return(0);
}
