#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	double num1, num2, result=0;
	char op;
	
	printf("Nhap phep tinh:(num1, op, num2)\n",num1,op,num2);
	scanf("%lf %c %lf",&num1, &op, &num2);
	switch(op)
	{   case '+': result = num1 + num2;
				printf("%.2lf", result);
				break;
		case '-': result = num1 - num2;
			 	printf("%.2lf", result);
			 	break;
		case '*': result = num1 * num2;
			 	printf("%.2lf", result);
			 	break;
		case '/': if(num2==0){
				printf("Divide by 0");}
				else{
				 result = num1 / num2;
			 	printf("%.2lf", result);}
			 	break;
	default:
			printf("Khong ho tro");
	}

	return 0;
}	
