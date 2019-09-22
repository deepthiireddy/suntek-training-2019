#include <stdio.h>
#include<stdlib.h>
void repeat(int arr[], int size) 
{ 
  int i; 
  printf("The repeating elements are: \n"); 
  for (i = 0; i < size; i++) 
  { 
    if (arr[abs(arr[i])] >= 0) 
      arr[abs(arr[i])] = -arr[abs(arr[i])]; 
    else
      printf(" %d ", abs(arr[i])); 
  } 
} 
  
int main() 
{ 
  int arr[50],n ;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  repeat(arr, n); 
  return 0; 
}
