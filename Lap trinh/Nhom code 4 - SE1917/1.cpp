#include <stdio.h>
#include <math.h>
//Nhap ham f(x)
double f(double x) {
    return abs(x); 
}

//Kiem tra tai x co ton tai dao ham
int kiem_tra_dao_ham(double (*f)(double), double x0, double *derivative) {
    double h = 0.000001; // Do chinh xac cua xap xi dao ham
    double f_plus_h = f(x0 + h);
    double f_minus_h = f(x0 - h);
    
    *derivative = (f_plus_h - f_minus_h) / (2 * h);

    if (!isnan(*derivative)) {  // Kiem tra co ton tai dao ham hay khong
        return 1;  // Dao ham ton tai tai x0
    } else {
        return 0;  //Dao ham khong ton tai tai x0
    }
}

int main() {
    double x0;
    printf("Nhap gia tri x0: ");
    scanf("%lf",&x0);
    double derivative;

    if (kiem_tra_dao_ham(f, x0, &derivative)) {
        printf("Dao ham ton tai tai diem %lf va co gia tri la %lf\n", x0, derivative);
    } else {
        printf("Dao ham khong ton tai tai diem %lf\n", x0);
    }

    return 0;
}

