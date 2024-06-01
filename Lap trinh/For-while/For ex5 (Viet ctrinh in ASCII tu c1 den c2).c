#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char c1,c2;
	printf("Enter first character: ");
	scanf("%c", &c1); //sau khi scan se bi du enter do may chi lay %d
	printf("Enter second character: ");
	fflush(stdin); //dung fflush(stdin) de xoa rac trong bo nho dem de khong thua enter
	scanf("%c", &c2);
	
	for(int i=c1; i<=c2; i++){
		printf("%d %x %c\n", i,i,i);
	}
	return 0;
}
