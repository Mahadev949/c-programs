#include <stdio.h>
#include<math.h>

int main() {
    // Write C code here
   int a,b,c;
   float s,e;
   
   printf("Enter a,b,c number:-");
   scanf("%d%d%d",&a,&b,&c);
   s=(a+b+c)/2;
   e=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("the answere is :- %f",e);
   
}
