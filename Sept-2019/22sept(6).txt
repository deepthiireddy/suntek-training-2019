#include <stdio.h>
int power(int n1,int n2);
int main()
{
    int b,e,r;
    printf("Enter base number: ");
    scanf("%d",&);
    printf("Enter exponent: ");
    scanf("%d",&e);
    r= power(b,e);
    printf("%d",r);
    return 0;
}
int power(int b, int e)
{
    if (e!= 0)
        return (b*power(b,e-1));
    else
        return 1;
}
