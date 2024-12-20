// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=0,n;
    printf("enter the nth value :- ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        a+=i;
    }
    printf("%d",a);
    
    return 0;
}
