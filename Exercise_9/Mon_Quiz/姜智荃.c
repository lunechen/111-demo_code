#include<stdio.h>
long long int factorial(int n);
long long int Fibonacci(int n);
long long int binomial(int n,int k);
long long int xymodulem(int x,int y,int m);
int line=0;
int main()
{
    int n,input;
    printf("How many queries do you want: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nWhich type of query do you want: ");
        scanf("%d",&input);
        if(input==1)
        {
            int N;
            printf("Please enter N: ");
            scanf("%d",&N);
            printf("%lld",factorial(N));
        }
        else if(input==2)
        {
            int I;
            printf("Please enter i: ");
            scanf("%d",&I);
            printf("%lld",Fibonacci(I));
        }
        else if(input==3)
        {
            int n,k;
            printf("Please enter n and k: ");
            scanf("%d %d",&n,&k);
            printf("%lld",binomial(n,k));
        }
        else if(input==4)
        {
            int x,y,m;
            printf("Please enter x, y and m: ");
            scanf("%d %d %d",&x,&y,&m);
            printf("%lld",xymodulem(x,y,m));
        }
    }
    //printf("%lld",binomial(N,K));
    //printf("%lld",xymodulem(N,K,M));
    //printf("%d",Fibonacci(N));
    //printf("%d",factorial(N));
}
long long int factorial(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*factorial(n-1);
}
long long int Fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return Fibonacci(n-2)+Fibonacci(n-1);
}
long long int binomial(int n,int k)
{
    if(k==0 || k==n)
        return 1;
    return binomial(n-1,k)+binomial(n-1,k-1);//binomial(n-1,k)
}
long long int xymodulem(int x,int y,int m)
{
    if(y==1)
    {
        return x%m;
    }
    if(y%2==1)//odd
    {
        //printf("xymodulem(%d,%d,%d)*xymodulem(%d,%d,%d)\n",x,1,m,x,y-1,m);
        return (xymodulem(x,1,m)*xymodulem(x,y-1,m))%m;
    }
    //printf("xymodulem(%d,%d,%d)*xymodulem(%d,%d,%d)\n",x,y/2,m,x,y/2,m);
    return (xymodulem(x,y/2,m)*xymodulem(x,y/2,m))%m;//even
}
