#include <stdio.h>
int main()
{
    int n, i, f=0;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("invalid");
    }
    else{
    for(i=2;i<=n/2;++i)
    {
        if(n%i == 0)
        {
            f=1;
            break;
        }
    }}
    if (n==1) 
    {
      printf("1 is neither prime nor composite");
    }
    else 
    {   if (f==0)
          printf("%d is prime", n);
        else
          printf("%d is not prime", n);
    }
      return 0;
}
