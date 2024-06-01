#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n,x=2, count=0;
	do {
		printf("n:");
		scanf("%d",&n);
	} while(n<1);
	
	while(count<n) {
		int	flag=0;
		for(int i=2; i<n; n++){
			if(x%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d", x);
			count++;
		}
		x++;
	}
	return 0;
}
