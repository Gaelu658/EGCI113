#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a>1 && a<5) {
    puts("In range");
    printf("My value is %d",a);

    }
    else puts("Out of range");

    return 0;
}
