#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n, sum=0;
	printf("Enter n:	");
	scanf("%d", &n);
	
	for(int i=1; i<= sqrt(n); i++){
		if(n%i==0){
			printf("%d	", i);
			sum +=i;
		}	
	}
	printf("\n Sum: %d", sum);
	
	return 0;
}
