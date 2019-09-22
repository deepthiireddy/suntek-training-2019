#include <stdio.h>
int main()
{
    int b,e;
    int r= 1;
    printf("Enter a base: ");
    scanf("%d", &b);
    printf("Enter an exponent: ");
    scanf("%d", &e);
    while (e!= 0)
    {
        r*=b;
        --e;
    }
    printf("result= %d",r);
    return 0;
}
