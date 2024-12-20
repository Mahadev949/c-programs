// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // prime number
    int a,count=0;
    printf("Enter the number :- ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        if (a%i==0){
            count++;
        }
    }
    
    if (count==2){
        printf("the given number %d is prime number",a);
        
    }
    else{
        
        printf("the given number %d is not a prime number ",a);

    }
    return 0;
}
