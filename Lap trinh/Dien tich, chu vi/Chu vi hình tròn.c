#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
// phai khai bao hang so o dau ngay tu dau de sau nay de sua doi
int main(int argc, char *argv[]) {
	//tính chu vi hình tròn
	float r;
	//cach 2 const PI=3.14; neu khong dung #define PI 3.14
	printf("Nhap vao ban kinh: ");
	scanf("%f", &r);
	
	printf("Dien tich: %.2f\n", r*r*PI); // %.2f = ??.?? OR %f = ??.????
	printf("Chu vi: %.2f", r*2*PI);
	return 0;
}
