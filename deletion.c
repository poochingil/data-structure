#include<stdio.h>
void main()
{
    int arr[5]={10,20,30,40,50};
    int n=5,pos=3;
    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d",arr[i]);
    }
}