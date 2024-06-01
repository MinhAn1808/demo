#include <stdio.h>
#include <math.h>

int ucln(int a, int b){
	int result;
   if(a == 0 || b == 0){
      result = a+b;
   }
   int min = a < b ? a : b;
   for(int i = min; i >= 1; i--){
      if(a % i == 0 && b % i == 0){
         return i;
      }
   }
   return 1;
}
int bcnn(int a, int b){
   int max = a > b ? a : b;
   int result = max;
   while(1){
      if(max % a == 0 && max % b == 0){
         result = max;
         break;
      }
      ++max;
   }
   return result;
}

int main(){
	int a,b,op;
	printf("1. UCLN \n2. BCNN \n3.Ngay ke tiep cua ngay thang nam sinh\n");
	scanf("%d",&op);
	switch(op){
		case 1:	printf("a: "); scanf("%d",&a);
				printf("b: "); scanf("%d",&b);
				printf("UCLN: %d", ucln(a,b));
				break;
		case 2: printf("a: "); scanf("%d",&a);
				printf("b: "); scanf("%d",&b);
				printf("BCNN: %d", bcnn(a,b));
		default: printf("ERROR");
}
   return 0;
}
