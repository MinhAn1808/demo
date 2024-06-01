#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int a[100];
	int n, sum=0;

	printf("Nhap so phan tu "); scanf("%d", &n);
	printf("Nhap gia tri cua tung phan tu");
	for(int i=0; i<n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}

	for(int i=0; i<n; i++){
	sum+= a[i];
	}
	printf("\nSum = %d", sum);
	return 0;
}	
