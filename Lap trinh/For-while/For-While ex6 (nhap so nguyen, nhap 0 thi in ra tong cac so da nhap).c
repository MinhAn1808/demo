#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int x, total=0;
	printf("Nhap 1 so, sau khi nhan 0 se ra tong\n",x);
	scanf("%d", &x);
	
	while(x!=0){
		total += x;
		scanf("%d", &x);
		
	}
	printf("\nTotal: %d", total);
	
	//Hoac su dung source do{ sancf("%d", &x); total += x; } while(x!=0);
	
	return 0;
}
