#include <stdio.h>
#include <stdlib.h>

//Tinh dien tich HCN
//int la so nguyen %d
//float la so le %f
int main(int argc, char *argv[]) {
// khai bao bien so nguyen sai int
int a; //neu cho nguoi dung tu nhap thi chi khai bao bien + scanf("format", &a);
int b;
printf("Vui long nhap chieu dai va chieu rong:"); //printf de nguoi dung biet phai nhap bien
scanf("%d%d", &a,&b); //moi %d la format cua a va b
printf("Chieu dai la: %d, Chieu rong la: %d\n", a,b);
//sau do printf
printf("Dien tich: %d",a*b);
	return 0;
}
