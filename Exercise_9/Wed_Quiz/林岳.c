#include <stdio.h>
#include <stdbool.h>
int N(int ans,int n){
    if (n == 1){
        return ans;
    } return N(ans*n, n-1);
}
int F(int n){
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return F(n-1) + F(n-2);
    
}
int C(int n, int k){
    if (k == 0 || n == k) return 1;
    else return (C(n - 1, k) + C(n - 1, k - 1));
}
long long XYM(long long x, long long y, long long m){
    
    if (y == 0) return 1%m;
    if (y == 1) return x%m;
    else {
        if (y % 2 == 0){
            return (XYM(x,y/2,m) * XYM(x, y/2,m)) % m;
        } else {
            return (XYM(x,1,m) * XYM(x, y-1,m)) % m;
        }
    }
}
int main(void){
    int round;
    int type, a, b;
    long long x, y, m;
    printf("How many queries do you want: ");
    scanf("%d", &round);
    for (int i = 0; i < round; i++){
        printf("Which type of query do you want: ");
        scanf("%d", &type);
        switch (type) {
            case 1:
                printf("Please enter N: ");
                scanf("%d", &a);
                printf("%d\n", N(1, a));
                break;
            case 2:
                printf("Please enter i: ");
                scanf("%d", &a);
                printf("%d\n", F(a));
                break;
            case 3:
                printf("Please enter n and k: ");
                scanf("%d%d", &a, &b);
                printf("%d\n", C(a, b));
                break;
            case 4:
                printf("Please enter x, y and m: ");
                scanf("%lld%lld%lld", &x, &y , &m);
                printf("%lld\n", XYM(x, y, m));
                break;
            
            default:
                break;
        }
    }
    return 0;
}