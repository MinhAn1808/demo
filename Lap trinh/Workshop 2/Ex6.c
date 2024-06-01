#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,m;
	
	printf("Nhap hieu rong: ");
	scanf("%d", &n);
	printf("Nhap chieu dai: ");
	scanf("%d", &m);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(i==1 || i==n || j==1 || j==m){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
	printf("\n");
	}

	return 0;
}	
