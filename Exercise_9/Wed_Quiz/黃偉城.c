#include<stdio.h>

long long int fac(int N){
    if(N==0) return 0 ;
    if(N==1) return 1 ;
    else return N * fac(N-1) ;
}
int fi(int i){
    if(i==0) return 0 ;
    else if(i==1) return 1 ;
    else return fi(i - 1) + fi(i - 2) ;
}

long long int c(int n , int k){
    if(n < k) return 0 ;
    else if(n == k) return 1 ;
    else if(k == 0) return 1;
    else if(k == 1) return n ;
    else return c(n-1 , k) + c(n-1 , k-1) ;
}

long long int p(int x , int y , int m){
    if(y == 0) return 1 % m;
    else if(y == 1) return x % m;
    else if(y % 2 == 1) return x%m * p(x , y-1 , m)%m;
    else if(y % 2 == 0) return p(x , y/2 , m)%m * p(x , y/2 , m)%m ;
}

int main(){

    int  num ;

    printf("How many queries do you want: ");
    scanf("%d",&num) ;

    int query[num];

    for(int j=0 ; j<num ; j++){
        printf("Which type of query do you want: ");
        scanf("%d",&query[j]);
        int N ;int i ;int n , k ;int x, y , m ;

        switch(query[j])
        {
            case 1 :
                
                printf("Please enter N: ");
                scanf("%d",&N) ;
                printf("%lld\n",fac(N));
                break;
            case 2 :
                
                printf("Please enter i: ");
                scanf("%d",&i);
                printf("%d\n",fi(i));
                break ;
            case 3 :
                
                printf("Please enter n and k: ");
                scanf("%d %d",&n,&k);
                printf("%lld\n",c(n , k));
                break ;
            case 4 :
                
                printf("Please enter x, y and m: ");
                scanf("%d %d %d",&x,&y,&m);
                printf("%lld\n",p(x,y,m));
                break ;
        }

    }
    
    return 0 ;
}