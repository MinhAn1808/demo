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
	int x;
	int flag = 0;
	printf("Nhap so X can tim: "); scanf("%d", &x);
	for(int i=0; i<n; i++){
		if(x==a[i]){
			flag=1;
		}
	}
	if(flag == 1){
	printf("X co xuat hien trong mang");
}
	else{
	printf("X khong co xuat hien trong mang");
	}

	return 0;
}	
