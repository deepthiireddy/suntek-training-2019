#include <stdio.h>
//quick sort
void quick(int a[100],int f,int l)//function to sort taking array first and last as parameters

{
  int i=f,j=l,pivot=a[f],temp;
  if(f<l)
  {
    while(i<j)
    {
      while(a[i]<=pivot && i<=l)//mov i until left side is less
       i++;
      while(a[j]>pivot)
       j--;
      if(i<j)
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
    }
    if(f!=j)
    {
      temp=a[j];
      a[j]=a[f];
      a[f]=temp;
    }
    quick(a,f,j-1);
    quick(a,j+1,l);
  }
}
int main(void) {
int n,a[100],i;
scanf("%d",&n);//number of elmnts to be scanned
for(i=0;i<n;i++)
   scanf("%d",&a[i]);//reading into array;
 quick(a,0,n-1);
 for(i=0;i<n;i++)
   printf("%d ",a[i]);
  return 0;
}
//-by deepthi reddy
