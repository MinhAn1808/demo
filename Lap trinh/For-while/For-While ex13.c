#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n, result=1;
	printf("n:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		result*=i;
	}
	printf("Giai thua cua %d la: %d", n,result);

	return 0;
}
