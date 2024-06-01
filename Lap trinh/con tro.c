#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void reverseNumber(int n);
int main() {
	//=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
	system("cls");
	printf("\nTEST Q2 (3 marks):\n");
	int n;
	int sum;
	do {
		printf("Enter n = ");
		scanf("%d",&n);
	} while(n<=0);	
	printf("\nOUTPUT:\n");
	reverseNumber(n);
	printf("\n");
	system ("pause");
	return(0);
	//============================================================
}
//-----------------------------------------------------
void reverseNumber(int n) {
	//Begin your codes here=====================
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10; // L?y ch? s? cu?i cùng c?a n
        reversed = reversed * 10 + digit; // Ð?o ngu?c và c?ng thêm ch? s? m?i
        n /= 10; // Lo?i b? ch? s? cu?i cùng c?a n
    }
    return reversed;
	//End your codes============================
}
