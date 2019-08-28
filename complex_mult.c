#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, d, e, f;
    printf("Enter the first complex number in the form ai + b: ");

    scanf("%lf i + %lf", &a, &b);

    printf("\nEnter the second complex number in the form ai + b: ");

    scanf("%lf i + %lf", &c, &d);

    e = (a * d) + (c * b);
    f = (b * d) - (a * c);

    printf("\n(%.0lfi + %.0lf) * (%.0lfi + %.0lf) = %.0lfi + %.0lf", a, b, c, d, e, f);

    return 0;
}
