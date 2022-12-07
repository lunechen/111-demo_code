#include <stdio.h>

int query1(int n);
int query2(int i);
long long query3(long long q, long long k);
long long query4(long long x, long long y, long long m);

int main(){
    printf("How many queries do you want: \n");
    int N;
    int n,I;
    long long q, k, x, y, m;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        printf("Which type of query do you want: ");
        int choice;
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Please enter N: ");
                scanf("%d", &n);
                printf("%d\n", query1(n));
                break;
            case 3:
                printf("Please enter n and k: ");
                scanf("%lld %lld", &q, &k);
                printf("%lld\n", query3(q, k));
                break;
            case 2:
                printf("Please enter i: ");
                scanf("%d", &I);
                printf("%d\n", query2(I));
                break;
            case 4:
                printf("Please enter x, y and m: ");
                scanf("%lld %lld %lld", &x, &y, &m);
                printf("%lld\n", query4(x, y, m)%m);
                break;
        }
    }
    return 0;
}

//factorial
int query1(int n){
    if(n == 0){
        return 1;
    }else if(n > 0){
        return n*query1(n - 1);
    }
}

//Fibonacci
int query2(int i){
    if(i <= 0){
        return 0;
    }else if(i == 1){
        return 1;
    }else{return query2(i - 1) + query2(i - 2);}
}

//Pascal's rule
long long query3(long long q, long long k){
    if(q == k || k == 0){
        return 1;
    }else{
        return query3(q - 1, k) + query3(q - 1, k - 1);
    }
}

//exponent
long long query4(long long x, long long y, long long m){
    if(y == 1){
        return x % m;
    }else if(y % 2 == 1 && y != 1){
        return query4(x, 1, m) * (query4(x, y-1, m)%m);
    }else if(y % 2 != 1){
        return (query4(x, y/2, m)%m) * (query4(x, y/2, m)%m);
    }
}
