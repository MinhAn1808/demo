#include <stdio.h>
#include <stdlib.h>
//khai bao tai day

int main(int argc, char *argv[]){
	char f[100];
	int bienx;
	gets(f);
	char sign;
	int number;
	int x;
	printf("Enter x: "); scanf("%d",&x);
	for(int i=0;i<strlen(f);i++){
		if(f[i]=='x'){
			f[i] = x;
		}
		else if(f[i]=='+' || f[i]=='-'|| f[i]=='*'||f[i]=='/'){
			sign = f[i];
		}
		else if(f[i]>-99999999999999 && f[i]<9999999999 ){
			number = f[i];
		}
	}

	int result=0;
	if(sign=='+'){
		result = x + number;
		printf("%d = %d + %d",result,x,number);
	}
	else if(sign=='-'){

		result = x - number;
		printf("%d",result);
	}
	else if(sign=='*'){

		result = x * number;
		printf("%d",result);
	}	
	else if(sign=='/'){

		result = x/number;
		printf("%d",result);
	}	
	return 0;
}	
