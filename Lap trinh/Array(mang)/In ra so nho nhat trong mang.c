#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n;
	int a[100];

	printf("Nhap so phan tu trong mang: "); scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%d",&a[i]);
	}
	int min = a[0];
	for(int i=0; i<n; i++){
		if(a[i]<min){
		min = a[i];
		}
	}
	printf("Min= %d", min);
	return 0;
}	
