#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
//so ngto chi chia het cho 1 va chinh no
	int n, flag=0;//bien co;
	do{
	printf("n:");
	scanf("%d",&n);
	}while(n<1);
	
	for(int i=2; i<n ; i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d la so ngto", n);
	}
	else{
		printf("Khong");
	}
	return 0;
}
