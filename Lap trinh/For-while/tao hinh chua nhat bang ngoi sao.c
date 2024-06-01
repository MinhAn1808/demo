#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int m,n;
	printf("m:");
	scanf("%d",&m);
	printf("n");
	scanf("%d",&n);
	
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}
