#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,n;
	printf("Nhap n", n);
	scanf("%d", &n);
	
	for(i=1; i<=n ; i+=2){
		printf("%d	", i);
	}
	return 0;
}
