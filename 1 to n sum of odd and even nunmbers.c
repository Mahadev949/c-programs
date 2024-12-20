// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=0,b=0,n;
    printf("enter the nth value :- ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (i%2==0){
            a+=i;
        }
        else{
            b+=i;
        }
    }
    printf("sum of even %d",a);
    printf("\nsum of odd %d",b);
    return 0;
}
