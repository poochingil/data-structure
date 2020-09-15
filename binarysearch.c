#include<stdio.h>

void main()
{
    int arr[6]={2,4,6,8,10,12};
    int key,answer,l,h,mid;
    printf("enter key");
    scanf("%d",&key);
    l=0;
    h=6;
    mid=(l+h)/2;
    while(l<=h)
    {
        if(key<arr[mid])
        {
            h=mid-1;
        }
       else if(key==arr[mid])
       {
           printf("%d",mid+1);
           break;
       }
       else
       {
           l=mid+1;
        
    }
       mid=(l+h)/2;
    }
    if(l>h)
        printf("not found");
}