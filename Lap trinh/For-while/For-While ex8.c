#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int m,sum=0;
	printf("Enter m:	");
	scanf("%d", &m);
	for(int i=1; i<m; i++){
		if(m%i==0){
			printf("%d ",i);
			sum +=i;
		}
	}
	printf("\nSum:%d",sum);
	if(sum==m){
		printf("\n%d la perfectnumber", m);
	}
	else{

		printf("\nkhong phai");
	}
	return 0;
}
