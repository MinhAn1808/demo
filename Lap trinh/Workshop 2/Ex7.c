#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Nhap so nguyen duong n (chieu dai canh tam giac): ",n);
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int h=1; h<i; h++){
			printf("  ");
		}
		for(int j=i; j<=n; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}	
