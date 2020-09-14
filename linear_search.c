#include<stdio.h>
void main()
{
    int arr[6]={2,4,6,8,10,12};
    int key,flag=0;
    printf("enter no to be searched");
    scanf("%d",&key);
    for(int i=0;i<=5;i++)
    {
        if(key==arr[i])
        {
            printf("%d",i);
            flag=i;
        }
   }
     if(flag==0)
        {
            printf("number not found");
        }
}
