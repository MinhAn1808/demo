#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int m,n;
	printf("Enter m:	");
	scanf("%d", &m);
	//cho hai for chay song song
	for(int e=1;	e<m;	e++){
		int sum=0;
		for(int i=1;i<e;i++){
			if(e%i==0){
				sum +=i; //tong cac uoc cua so e 
			}
		}	
		if(sum==e){
			printf("%d	",e); //in ra perfect number
		}
	}
	return 0;
}
