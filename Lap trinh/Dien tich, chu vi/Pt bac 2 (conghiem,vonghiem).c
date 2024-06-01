#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,c, denta;
	printf("Dit me may nhap a");
	scanf("%d", &a);
	printf("Roi dit me nhap b");
	scanf("%d", &b);
	printf("Nhap c cho tao");
	scanf("%d", &c);
	denta = b*b - 4*a*c;
	if(denta >0){
		printf("aduma pt co nghiem nha");}
	else if(denta <0){
		printf("ditme pt vo nghiem");
	}
	return 0;
	}

