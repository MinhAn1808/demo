#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	char c;
	
	printf("Enter number:");
	scanf("%d", &n);
	
	printf("Enter character:");
	scanf("%c", &c);
	
	printf("n = %d , c = %c", n,c);
	
	return 0;
}
