#include<stdio.h>
void main()
{   int x=20,pos=2,n=6;
    int arr[5]={2,3,4,5,6};
    for(int i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    for(int i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }    
} 
