#include<stdio.h>
void main()
{   int i,j,x,y;
     printf("Enter size of row  ");
     scanf("%d",&x);
     printf("Enter size of column ");
     scanf("%d",&y);

    int A[x][y];
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            //printf("enetr value to be displayed for A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<y ; j++)
        {
            printf("%d",A[i][j]);
            if(j==y-1)
                printf("\n");
        }
    }
}