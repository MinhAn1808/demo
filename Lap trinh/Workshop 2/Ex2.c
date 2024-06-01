#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int t,p=0;
	
	printf("Nhap so dien da dung: ");
	scanf("%d",&t);
	
	if(t<=100){
		p = t * 950;
		printf("\nTien dien: %d VND", p);
	}
	else if(t>100 && t<=150){
		p = t * 1250;
		printf("\nTien dien: %d VND", p);
	}
	else if(t>150 && t<=200){
		p = t *1350;
		printf("\nTien dien: %d VND", p);
	}
	else{
		p = t* 1550;
		printf("\nTien dien: %d VND", p);
	}
	return 0;
}	
