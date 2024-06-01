#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n;
	int a[100];
	printf("n: "); scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("\n a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	int max = a[0];

	for(int i =0; i<n; i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("\nMax = %d", max);
	return 0;
}	
