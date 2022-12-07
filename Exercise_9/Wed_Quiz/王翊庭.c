#include <stdio.h>
int N(int n){
    if(n==1) return 1;
    else return n*N(n-1);
}
int Fib(int x){
    if(x==0) return 0;
    else if(x==1) return 1;
    else return (Fib(x-1) + Fib(x-2));
}
int nCk(int n,int k){
    if(n == k || k == 0) return 1;
    else if(k == 1)      return n;
    else   return nCk(n-1,k-1) + nCk(n-1,k);
}
int xy(int A,int B,int C){
    if (A == 0) return 0; //底數0
    if (B == 0) return 1; //0次方
    // If B is even
    long y;
    if (B % 2 == 0) {
        y = xy(A, B / 2, C);
        y = (y * y) % C;
    }
    // If B is odd
    else {
        y = A % C;
        y = (y * xy(A, B - 1, C) % C) % C;
    }
    return (int)((y + C) % C);
}
int main(){
    int query,type,n,a,b,c,d,e,f;
    printf("How many queries do you want: ");
    scanf("%d",&query);
    for(int i=0;i<query;i++){
        printf("Which type of query do you want: ");
        scanf("%d",&type);
        if(type==1){
            printf("Please enter N: ");
            scanf("%d",&n);
            printf("%d\n",N(n));
        }
        else if(type==2){
            printf("Please enter i: ");
            scanf("%d",&d);
            printf("%d\n",Fib(d));
        }
        else if(type==3){
            printf("Please enter n and k: ");
            scanf("%d %d",&e,&f);
            printf("%d\n",nCk(e,f));
        }
        else if(type==4){
            printf("Please enter x, y and m: ");
            scanf("%d %d %d",&a,&b,&c);
            printf("%d\n",xy(a,b,c));
        }
    }
}