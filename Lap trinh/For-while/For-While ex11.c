#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n,cout=0;
	printf("n:", n);
	scanf("%d", &n);
	
	for(int i=1; i<=10; i++ ){
		printf("%d*%d=%d",n,i,n*i);
		cout++;
	if(cout%1==0)
		printf("\n");
	}
	return 0;
}
