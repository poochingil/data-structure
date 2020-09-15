#include<stdio.h>
void input(int *arr)
{
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
int min(int *arr)
{      int m=arr[0];
    for(int i=0;i<=5;i++)
    {   
        if(arr[i]<m)
            m=arr[i];
    }
    return m;
}
int max(int *arr)
{
    int maxo=arr[0];
    for(int i=0;i<=5;i++)
    {
        if(arr[i]>maxo)
            maxo=arr[i];
    }
    return maxo;
}
int add(int *arr)
{
    int s=0;
    for(int i=0;i<6;i++)
    {
        s=s+arr[i];
    }
    return s;
}
void main()
{
    int arr[6],minimum,maximum,avg,sum;
    printf("enter a sorted array");
    input(arr);
    minimum=min(arr);
    maximum=max(arr);
    sum=add(arr);
    avg=sum/6;
    printf("minimumvalue is %d \n",minimum);
    printf("maximum is value is %d \n",maximum);
    printf("sum is %d \n",sum);
    printf("average is %d \n",avg);
}