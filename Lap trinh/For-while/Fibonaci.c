#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n, t1=0, t2=1,f=1;
	printf("n");
	scanf("%d", &n);
	printf("%d",t1);
	
	while(f<n){
		f = t1 + t2;
		printf("%d ", f);
		t1 = t2;
		t2 = f;	
	}
	if(f==n){
		printf("%d la so fibonaci", n);
	}
	else{
		printf(" Khongp phai");
	}
	return 0;
}	
