#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	int n;
	int a[MAX][MAX];
	printf("Enter order of matrix: ");
	scanf("%d",&n);
	printf("Enter matrix: \n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	//duong cheo chinh
	printf("Ma tran duong cheo chinh\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		if(a[i]==a[j]){
			printf("%d ",a[i][j]);
		}
		else{
			printf("0 ");
		}
	}
	printf("\n");
}
	printf("\n");
	//tam giac tren
	printf("Ma tran tam giac tren\n");
	for(int i=1;i<=n;i++){
		if(i>=2){
			for(int j=1; j <= i-1;j++){
				printf("0 ");
			}
		}
		for(int j=i;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//tam giac duoi
	printf("Ma tran tam giac duoi\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",a[i][j]);
		}
		if(i<n){
			for(int j=i+1; j <= n;j++){
				printf("0 ");
			}
		}
		printf("\n");
	}
	printf("\n");
	//duong cheo phu
		printf("Ma tran duong cheo phu\n");
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(j==n-i+1){
    			printf("%d ",a[i][j]);
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
