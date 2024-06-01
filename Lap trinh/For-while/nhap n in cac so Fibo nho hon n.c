#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n, t1=0, t2=1,f=1, count=1;
	printf("n");
	scanf("%d", &n);
	printf("%d",t1);
	
	while(count<n){
		printf("%d ", f);
		count++;
		f = t1 + t2;
		t1 = t2;
		t2 = f;	

	}
	return 0;
}	
