#include <stdio.h>
int main()
{
    int m[10][10];
    int i,j,r,c;
     
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);
 
    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    if(r==c)
    {
            for(i=0;i< c;i++)
            {
                for(j=0;j< r;j++)
                {
 
                    if(i==j)
                        printf("%d\t",m[j][i]); 
                    else
                        printf("\t");
                }
                printf("\n");      
            }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }
    return 0;   
}
