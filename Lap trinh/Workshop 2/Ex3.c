#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a,b,c;
	double x1,x2,d;
	
	printf("Nhap he so a,b,c\n");
	scanf("%f%f%f",&a ,&b, &c);
	printf(" Pt: %.2f*x^2 + %.2f*x + %.2f = 0", a,b,c);
	
	d= b*b - 4*a*c;
	
	if(d>0){
		x1= (-b- sqrt(d))/(2*a);
		x2 = (-b + sqrt(d))/(2*a);
		printf("\nPhuong trinh co hai nghiem phan biet: x1=%.2f, x2=%.2f", x1, x2);
	}
	else if(d==0){
		x1=x2= (-b)/(2*a);
		printf("\nPhuong trinh co nghiem kep x1=x2= %.2f", x1);
	}
	else{
		printf("\nPhuong trinh vo nghiem");
	}
	return 0;
}	
