#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    int prime = (n > 1);
    int i = 2;

    do {
        if (n % i == 0) {
            prime = 0; 
        }
        i++;
    } while (i * i <= n);

    if (prime) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong la so nguyen to.\n", n);
    }

	return 0;
}	
