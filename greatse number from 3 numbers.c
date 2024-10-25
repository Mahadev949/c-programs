#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the 3 numbers :- ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>c){
        if (a>b){
            printf("%d",a);
            
        }
        else{
            printf("%d",b);
        }
    }
    else{
        printf("%d",c);
    }
}
