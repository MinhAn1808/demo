#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n,i,sum=0, cout=0;
	printf("Nhap n", n);
	scanf("%d", &n);
	
	for(i=1; i<=n;i+=2){
		printf("%d	", i);
		cout++;	
	
	if(cout%15==0)
		printf("\n");
}
	return 0;
}
