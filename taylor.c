#include<stdio.h>
int fun(int x,int n)
{
    static int p=1,f=1;
    int r;
    if(n==0)
        return 0;
    else
    {
        r=fun(x,n-1);
        p=p*x;
        f=f*n;
        return (r+p/f);
        
    }
    
    
    
}
void main()
{
    int n,x;
    printf("enter value of x");
    scanf("%d",&x);
    printf("enter value of n");
    scanf("%d",&n);
    int answer= fun (x,n);
    printf("answer is %d",answer);
}