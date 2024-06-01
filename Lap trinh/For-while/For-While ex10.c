#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("n:");
	scanf("%d",&n);
	float x = sqrt(n);
	int	y = sqrt(n);
	if(x==y){
		printf("\n%d chinh la so chinh phuong", n); //so chinh phuong la sqrt no ra so nguyen duong
	}
	else printf("\n%d khong phai square number:", n);
	return 0;
}
