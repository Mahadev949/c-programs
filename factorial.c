// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // factorial number
    long int a,b,c=1;
    printf("Enter the number :- ");
    scanf("%ld",&a);
    for (b=1;b<=a;b++){
        c=c*b;
    }
    printf("%ld",c);
    return 0;
}
