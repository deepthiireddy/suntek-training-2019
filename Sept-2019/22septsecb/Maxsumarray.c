//maximum contiguous array with max sum
#include <stdio.h>
void main()
{
    int n,a[20],i;
    int sum=0;
	int temp=0;
	int start=0,end=0;
	int beg=0;
    printf("Enter size:");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
	  temp=temp+a[i];
	  if (temp<0)
		{
		  temp=0;	
		  beg=i+1;
		}
		if (sum<temp)
		{
		  sum=temp;
		  start=beg;
		  end=i;
		}
	}

	printf("\n max sum:%d",sum);

	printf( "\ncontiguous array:");;
	for (i=start;i<=end;i++)
	printf("%d ",a[i]);
}
