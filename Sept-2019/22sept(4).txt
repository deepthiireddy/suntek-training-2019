#include <stdio.h>
#include <stdlib.h>
int powermodrec(int x,int n);
int main()
{
    int x,n,i,y,p,mod;
    printf("Enter x,n,p(x^nmod p):");
    scanf("%d%d%d",&x,&n,&p);
    if(x==0)
    {
        printf("mod=0");
        exit(0);
    }
    if(x==1)
    {
        printf("mod=%d",1%p);
        exit(0); 
    }
    if(n==1)
    mod=x%p;
    else if(n==0)
    mod=1%p;
    mod=powermodrec(x,n);
    printf("\nmod=%d",mod%p);
    return 0;
}
int powermodrec(int x,int n)
{
    if(n==0)
    return 1;
    else 
      return(x*powermodrec(x,n-1));
    
}
