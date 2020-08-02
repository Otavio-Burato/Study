#include "stdio.h"

int main(void) {

	int A[]={1,43,23,65,76,325,2,234,3};
	int i,j,key;

	for(j=1; j<9; j++){
		i = j-1;
		key = A[j];

		while( i>=0 && A[i] > key ){
			A[i+1] = A[i];
			i--;
		}

		A[i+1] = key;
	}

	for(i=0;i<9;i++){
	printf("\n%d\n",A[i]);
	}

}
