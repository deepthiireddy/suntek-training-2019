#include <stdio.h>
#include <stdlib.h>
void repeat_miss(int arr[], int size);

void repeat_miss(int arr[], int size) 
{ 
    int i; 
    printf("\n The repeating element is"); 
  
    for (i = 0; i < size; i++) { 
        if (arr[abs(arr[i]) - 1] > 0) 
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
        else
            printf(" %d ", abs(arr[i])); 
    } 
  
    printf("\n the missing element is "); 
    for (i = 0; i < size; i++) { 
        if (arr[i] > 0) 
            printf("%d", i + 1); 
    } 
} 
  
int main() 
{ 
    int arr[50],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    repeat_miss(arr, n); 
    return 0; 
}
