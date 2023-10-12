#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float x1,x2;

    printf("Enter your coefficients:");
    scanf("%d %d %d",&a,&b,&c);

    printf("Roots of the equation");

    switch(a){
      case 1:
          printf("x^2");
          break;
      case 0:
          break;
      case -1:
          printf("-x^2");
          break;
      default:
          printf("%dx^2",a);
    }

    if((a!=0 && b!=0)&&c>0)
        printf("+");
    switch(b){
      case 1:
          printf("x");
          break;
      case 0:
          break;
      case-1:
          printf("-x");
          break;
      default:
          printf("%dx",b);
    }

    if(b!=0 && c>0)
        printf("+");

    if(c!=0)
        printf("%d=0\n",c);

    else
        printf("=0\n");
    printf("\n");

     float discriminant = b * b - 4 * a * c;

    if (a == 0) {
        // Handle linear equation (a = 0)
        if (b != 0) {
            x1 = -c / (float)b;
            printf("x = %f\n", x1);
        } else {
            if (c == 0) {
                printf("Infinite solutions\n");
            } else {
                printf("No solution\n");
            }
        }
    } else {
        if (discriminant > 0) {
            // Two real solutions
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("x1 = %f\nx2 = %f\n", x1, x2);
        } else if (discriminant == 0) {
            // One real solution
            x1 = -b / (2 * a);
            printf("x = %f\n", x1);
        } else {
            // Complex solutions
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("x1 = %f + %fi\nx2 = %f - %fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        }
    }

    x1=(-b+sqrt(b*b)-4*a*c)/(2*a);
    x2=(-b-sqrt(b*b)-4*a*c)/(2*a);

    return 0;
}
