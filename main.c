#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float x1,x2;

    printf("Enter your coefficients:");
    scanf("%d %d %d",&a,&b,&c);
    puts("Roots of the equation");
    switch(a){
      case 1: printf("x^2"); break;
      case 0: break;
      case -1: printf("-x^2"); break;
    default("%dx^2",a);
    }

    if(b>0) printf("+")
    switch(b){

    }

    x1=(-b+sqrt(b*b)-4*a*c)/(2*a);
    x2=(-b-sqrt(b*b)-4*a*c)/(2*a);



    return 0;
}
