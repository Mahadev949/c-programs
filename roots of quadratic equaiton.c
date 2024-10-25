#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c, d;
    float r1, r2;

    printf("Enter the 3 numbers a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);

    if (d > 0) {
        printf("Real and distinct\n");
    } 
    else if (d < 0) {
        printf("Real and imaginary\n");
    } 
    else {
        printf("Real and equal\n");
    }


    printf("The roots are: %.2f, %.2f\n", r1, r2);

    return 0;
}
