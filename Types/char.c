#include <stdio.h>

int main(void){
	char name[] = "Otavio Burato";
	int i;

	for(i=0 ; name[i] != '\0' ; i++)
		printf("%c ",name[i]);
	printf("\n");
	for(i=0 ; name[i] != '\0' ; i++)
		printf("%d ",name[i]);

	return (0);
}
