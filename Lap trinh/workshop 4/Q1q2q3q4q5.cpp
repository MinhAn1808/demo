#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void q1(int n){
	int m,sum=0;
	for(int i=1; i<=n;i++){
		m = i*i;
		sum+= m;
	}
	printf("\n S= 1^2 + 2^2 +...+ %d^2= %d",n,sum);
}
void q2(int n){
	int sum=0,m;
	
	for(int i =1; i<=n; i++){
		m = i*i*i;
		sum+= m;
	}
	printf("\n S= 1^3 + 2^3 +...+ %d^3= %d",n,sum);
}
void q3(int n){
	float m=0;
	float sum=0;
	
	for(int i=1; i<=n;i++){
		m = (float)(i)/(i+1);
		printf("%d",m);
		sum+= m;
	}
	printf("\n S= 1/2 + 2/3 +...+ %d/(%d+1)= %.2f",n,n,sum);
}
void q4(int n){
	int sum=0,a,b, m;
	int sign = 1;
	for(int i =1; i<=n; i++){
		sum+= i* sign;
		sign *= -1;
	}
	printf("\n S= 1 - 2 + 3 - 4+...+(-1)^%d+1.%d = %d",n,n,sum);
}
void q5(int n){
	
}	
int main(int argc, char *argv[]) {
	int op;
	int n;
	printf("Enter n: "); scanf("%d",&n);
	printf("\n======LIST====== \n");
	printf("Q1: computing S = 1^2+....+%d^2 \n",n);
	printf("Q2: computing S = 1^2+....+%d^2 \n",n);
	printf("Q3: computing S = 1/2+....+%d/(%d+1) \n",n,n);
	printf("Q4: computing S = 1-2+3-4+....+(-1)^%d+1.%d \n",n,n);
	scanf("%d", &op);
	switch(op){
		case 1:
			q1(n);
			break;
		case 2:
			q2(n);
			break;
		case 3:
			q3(n);
			break;
		case 4:
			q4(n);
			break;
		case 5:
			q5(n);
			break;
		default:
			printf("ERROR");
	}
	return 0;
}	
