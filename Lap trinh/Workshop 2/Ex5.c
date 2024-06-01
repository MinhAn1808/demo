#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int x1=1,x2=1,f=1;
	while(f<n){
		f = x1 + x2;
		x1 = x2;
		x2 = f;
	}
	if(f==n){
		printf("\n%d la so fibonaci", n);
	}
	else{
		printf("\n%d khong phai la so fibonaci", n);
	}
	return 0;
}	
