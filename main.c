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
      case 1: printf("x^2");
      case 0: break;
      case -1: printf("-x^2"); break;
      default: printf("%dx^2",a);
    }

    if((a!=0 && b!=0)&&c>0) printf("+");
    switch(b){
      case 1: printf("x");
      case 0: break;
      case-1: printf("-x");break;
      default: printf("%dx",b);
    }

    if(b!=0 && c>0) printf("+");

    if(c!=0) printf("%d=0\n",c);

    puts("=0");

    float sq=b*b-4*a*c;
    if(a==0){
     if(b==0)
        printf("The answer is %.2f\n",-(float)c/b);
         else printf("No solution\n");

    }

    else
        if(sq==0) {
         printf("The answer is %.2f\n",-(float)b/(2*a));
        }
         else if(sq<0) printf("No solution\n");
         else {
            printf("the answer is %.2f\n",(-b+sqrt(b*b)-4*a*c)/(2*a));
            printf("and %.2f\n",(-b-sqrt(b*b)-4*a*c)/(2*a));

         }

    return 0;
    }
