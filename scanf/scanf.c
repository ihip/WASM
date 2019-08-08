// Hip / 2019-08-05 / 2019-08-08

#include <stdio.h>

int main(int argc, char ** argv) {
    double a = 0.0, b = 0.0;

    printf("Addition demo\n");

    printf("\nEnter the first number:\n");
    scanf("%lf", &a);
    printf("%lf\n", a);

    printf("\nEnter the second number:\n");
    scanf("%lf", &b);
    printf("%lf\n", b);

    printf("\n%lf + %lf = %lf\n", a, b, a + b);
}
