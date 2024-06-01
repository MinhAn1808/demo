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
		if(a[i]%2==0){
		sum+= a[i];
		}
		
	}
	printf("Sum so chan = %d",sum);
 //in tung gia tri trong mang a ra man hinh
	return 0;
}	
