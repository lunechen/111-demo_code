#include<stdio.h>

void Factorial();//階層
void Fibonacci();//費氏數列
int fib_calculate(int);
void Binomial_Coefficients();//二項式係數
int BC_calculate(int,int);
void Pow_xy_mod_m();//x^y (mod m)
long long int xym_calculate(long long,long long,long long);

int main(){
    int num,query;
    printf("How many queries do you want: ");
    scanf("%d",&num);
    //start
    for(int i=0; i<num; i++){
        printf("Which type of query do you want: ");
        scanf("%d",&query);
        //宣告函式
        if(query==1) Factorial();
        else if(query==2) Fibonacci();
        else if(query==3) Binomial_Coefficients();
        else if(query==4) Pow_xy_mod_m();
    }
}

void Factorial(){
    int N,s=1;
    printf("Please enter N: ");
    scanf("%d",&N);
    for(int i=N; i>0; i--) s*=i;
    printf("%d\n",s);
}

void Fibonacci(){
    int i;
    printf("Please enter i: ");
    scanf("%d",&i);
    printf("%d\n",fib_calculate(i));
}

int fib_calculate(int i){
    if(i==0) return 0;
    else if(i==1) return 1;
    return fib_calculate(i-1)+fib_calculate(i-2);
}

void Binomial_Coefficients(){
    int n,k;
    printf("Please enter n and k: ");
    scanf("%d %d",&n,&k);
    printf("%d\n",BC_calculate(n,k));
}

int BC_calculate(int n,int k){
    if(k==1) return n;
    else if(n==k || k==0) return 1;
    return BC_calculate(n-1,k)+BC_calculate(n-1,k-1);
}

void Pow_xy_mod_m(){
    int x,y,m;
    printf("Please enter x, y and m: ");
    scanf("%d %d %d",&x,&y,&m);
    printf("%d\n",xym_calculate(x,y,m)%m);
}

long long int xym_calculate(long long int x,long long int y,long long int m){
    if(y==1) return x%m;
    else if(y%2==0) return xym_calculate(x,y/2,m)%m*xym_calculate(x,y/2,m)%m;
    else return xym_calculate(x,y-1,m)%m*xym_calculate(x,1,m)%m;
}