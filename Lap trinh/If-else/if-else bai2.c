#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x,max;
	
	scanf("%d", &x);
	max = x;
	
	scanf("%d", &x);
	if(x>max)
		max = x;
	
	scanf("%d", &x);
	if(x>max)
		max = x;
	
	scanf("%d", &x);
	if(x>max)
		max= x;
	printf("So lon nhat la %d", max);
	return 0;
}
