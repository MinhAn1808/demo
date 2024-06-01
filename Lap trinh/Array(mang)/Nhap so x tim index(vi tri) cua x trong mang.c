#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n;
	int a[100];
	printf("Nhap so gia tri trong mang: "); scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("\n a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		if(x==a[i]){
			printf("a[%d]	", i);
		}
	}	

	return 0;
}	
