#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x=290;
	char* p =&x;
	*p = 7;
	printf("x=%d *p=%d", x,*p); //do 290 la 1 0010 0010 ma char chi chiem 1byte(8bit) nen 7 he 2 la 0111 vi the x = 1 0000 0111 -> x= 263
	return 0;
}	
