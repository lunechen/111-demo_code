#include <stdio.h>

long long factorial(int n);
long long Fibonacci(int i);
long long binomial(int n,int k);
long long fourth(int x,int y,int m);

int main(){
    int T;
    printf("How many queries do you want: ");
    scanf("%d",&T);

    for(int i=0;i<T;i++){
        int t;
        printf("Which type of query do you want: ");
        scanf("%d",&t);

        if(t==1){
            int N;
            printf("Please enter N: ");
            scanf("%d",&N);
            printf("%lld\n",factorial(N));
        }

        if(t==2){
            int i;
            printf("Please enter i: ");
            scanf("%d",&i);
            printf("%lld\n",Fibonacci(i));
        }

        if(t==3){
            int n,k;
            printf("Please enter n and k: ");
            scanf("%d %d",&n,&k);
            printf("%lld\n",binomial(n,k));
        }

        if(t==4){
            int x,y,m;
            printf("Please enter x, y and m: ");
            scanf("%d %d %d",&x,&y,&m);
            printf("%lld\n",fourth(x,y,m));
        }
    }
    return 0;
}

long long factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}

long long Fibonacci(int i){
    if(i==0) return 0;
    else if(i==1) return 1;
    else return Fibonacci(i-1)+Fibonacci(i-2);
}

long long binomial(int n,int k){
    if(n==k) return 1;
    else if(k==1) return n;
    else return binomial(n-1,k)+binomial(n-1,k-1);
}

long long fourth(int x,int y,int m){
    if(y==0) return 1%m;
    else if(y==1) return x%m;
    else if(y%2==0) return (fourth(x,y/2,m)*fourth(x,y/2,m))%m;
    else return ((x%m)*fourth(x,y-1,m))%m;
}
