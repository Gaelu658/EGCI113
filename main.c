#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int x;
    int y;
    printf("Input your number:");
    scanf("%d",&x);
    /*
    if the number is between 0-10 'good'
    if the number is between 11-19 'teen'
    if it's bigger 'too big'
    if it's negative 'negative'
    */

    /*
    if(x>=0 && x<=10)   printf("Good");
    if(x>=11 && x<=19)  printf("teen");
    if(x>=20)           printf("too big");
    if(x<0)             printf("negative");
    */

    /*
    if(x>=20)        printf("too big");
    else if(x>=11)   printf("teen");
    else if(x>=0)    printf("Good");
    else             printf("negative");
    */

     int a,b,c,min,max;
    printf("Input 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a<=b && a<=c) min=a;
    else if(b<=c) min=b;
    else min=c;

    if(a>=b && a>=c) max=a;
    else if(b>=c)max=b;
    else max=c;

    printf("The minimum value is %d\n",min);
    printf("The maximum value is %d\n",max);

    /*y=x%2;// x%=2
    if(x%2) printf("%d is an odd number\n",x);
    if(!(x%2))
    else printf("%d is an even number\n",x);
    */

    return 0;
}
