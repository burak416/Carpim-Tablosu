#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,j;
	printf("%c",'X');
	for (i=0;i<=10;i++){
		printf("%4d",i);
	}
	printf("\n");
	for (i=0;i<=10;i++){
		printf("----");
	}
	printf("---");
	for (i=0;i<=10;i++){
		printf("\n%d |",i);
		for(j=0;j<=10;j++){
			printf("%4d",i*j);
		}
	}
	return 0;
}
