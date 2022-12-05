#include<stdio.h>
int Nfactorial(int i){
    if(i == 0){
        return 1;
    }else{   
    return i*Nfactorial(i-1);
    }
}
int Fi(int i){
    if(i == 0){
        return 0;
    }else if(i == 1){
        return 1;
    }else{
    return Fi(i - 1)+Fi(i - 2);
    }
}
long long int Prule(long long int n,long long int k){
    if(k == 0 || k == n){
        return 1;
    }else{
        return Prule(n-1,k)+Prule(n-1,k-1);
    }
}
long long int power(long long int x,long long int y,long long int m){
    if(y == 1){
        return x;
    }else if(y%2 == 0){
        return ((power(x,y/2,m)%m)*(power(x,y/2,m)%m))%m;
    }else{
        return((x%m)*(power(x,y-1,m)%m))%m;
    }
}

int main(){
    int T,query,num,out;
    long long int a,b,c,longout;
    printf("How many queries do you want: ");
    scanf("%d",&T);
    for(int i = 0;i < T; i++){        
        printf("Which type of query do you want: ");
        scanf("%d",&query);
        switch(query){
            case 1:
            printf("Please enter N: ");
                scanf("%d",&num);
                out = Nfactorial(num);
                printf("%d\n",out);
                break;
            case 2:
            printf("Please enter i: ");
                scanf("%d",&num);
                out = Fi(num);
                printf("%d\n",out);
                break;
            case 3:
            printf("Please enter n and k: ");
                scanf("%lld %lld",&a,&b);
                longout = Prule(a,b);
                printf("%lld\n",longout);
                break;
            case 4:
            printf("Please enter x, y and m: ");
                scanf("%lld %lld %lld",&a,&b,&c);
                longout = power(a,b,c);
                printf("%lld\n",longout);
                break;
        }
    }
}

