#include <stdio.h>
#include <math.h>

double f(double x) {
    return sin(x); 
}


double left_rectangle_rule(double (*f)(double), double a, double b, int n) {
    double sum = 0;
    double dx = (b - a) / n;
    for (int i = 0; i < n; i++) {
        sum += f(a + i * dx) * dx;
    }
    return sum;
}


double right_rectangle_rule(double (*f)(double), double a, double b, int n) {
    double sum = 0;
    double dx = (b - a) / n;
    for (int i = 1; i <= n; i++) {
        sum += f(a + i * dx) * dx;
    }
    return sum;
}


double midpoint_rule(double (*f)(double), double a, double b, int n) {
    double sum = 0;
    double dx = (b - a) / n;
    for (int i = 0; i < n; i++) {
        sum += f(a + (i + 0.5) * dx) * dx;
    }
    return sum;
}


double trapezoidal_rule(double (*f)(double), double a, double b, int n) {
    double sum = 0;
    double dx = (b - a) / n;
    sum += (f(a) + f(b)) / 2; 
    for (int i = 1; i < n; i++) {
        sum += f(a + i * dx);
    }
    sum *= dx;
    return sum;
}


double simpson_rule(double (*f)(double), double a, double b, int n) {
    double sum = 0;
    double dx = (b - a) / n;
    sum += f(a) + f(b); 
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) 
            sum += 2 * f(a + i * dx);
        else
            sum += 4 * f(a + i * dx);
    }
    sum *= dx / 3;
    return sum;
}

int main() {
    double a, b; 
    int n; 

    
    printf("Nhap gia tri cua a: ");
    scanf("%lf", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%lf", &b);
    printf("Nhap so khoang n:");
    scanf("%d", &n);

    
    printf("Left Rectangle Rule: %.6f\n", left_rectangle_rule(f, a, b, n));
    printf("Right Rectangle Rule: %.6f\n", right_rectangle_rule(f, a, b, n));
    printf("Midpoint Rule: %.6f\n", midpoint_rule(f, a, b, n));
    printf("Trapezoidal Rule: %.6f\n", trapezoidal_rule(f, a, b, n));
    printf("Simpson's Rule: %.6f\n", simpson_rule(f, a, b, n));

    return 0;
}

