#include<stdio.h>
#include<stdlib.h>

int n,m,sum=0,
    cup_price[5]={10,15,17,23,40};

void Select_base_wine();
void Add_two_wine();
void Add_juice();
void Add_CO2();
void Shake();
void Put_into_glass();
int gcd();//最大公因數

int main(){
    printf("Let's make our first cocktail!\n");
    Select_base_wine();
    Add_two_wine();
    Add_two_wine();
    Shake();
    Add_juice();
    Add_CO2();
    Put_into_glass();
    printf("Let's make our second cocktail!\n");
    sum=0;
    Select_base_wine();//1
    Add_two_wine();
    Shake();
    Add_juice();
    Shake();
    Add_CO2();//6
    Add_two_wine();
    Add_CO2();
    Add_juice();
    Shake();
    Add_two_wine();//11
    Shake();
    Add_two_wine();
    Add_juice();
    Add_CO2();
    Shake();//16
    Add_CO2();
    Add_two_wine();
    Shake();
    Add_juice();
    Add_juice();//21
    Add_two_wine();
    Add_two_wine();
    Add_CO2();
    Shake();
    Add_two_wine();//26
    Shake();
    Add_two_wine();
    Shake();
    Put_into_glass();
}

void Select_base_wine(){
    printf("Let's select the base wine!\n");
    printf("Please Enter flavor level of the base wine: ");
    scanf("%d",&n);
    sum+=n;
    printf("The flavor level is %d!\n",n);
}

void Add_two_wine(){
    printf("Now add two kinds of wines.\n");
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&n,&m);
    if(m>n){//swap
        int t=m;
        m=n;
        n=t;
    }
    n=gcd(n,m);
    sum+=n;
    printf("The flavor level increased %d!\n",n);
}

void Add_juice(){
    printf("Now add some juice.\n");
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&n);
    sum+=n;
    printf("The flavor level increased %d!\n",n);
}

void Add_CO2(){
    printf("Now add some CO2.\n");
    printf("The current flavor level is %d.\n",sum);
    printf("Please Enter power of CO2: ");
    scanf("%d",&n);
    if(n<=sum/2) m=n*2;
    else if(n<=sum) m=n*3;
    else m=n;
    printf("The flavor level increased %d!\n",m);
    sum+=m;
}

void Shake(){
    printf("Now shake.\n");
    m=0;
    do{
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&n);
        m+=n;
    }while(n!=0);
    sum+=m;
    printf("The flavor level increased %d!\n",m);
}

void Put_into_glass(){
    printf("Finally, select a wine glass to pull your cocktail in.\n");
    printf("Please enter the number of wine glass(1 to 5): ");
    scanf("%d",&n);
    sum+=cup_price[n-1];
    printf("The price increased %d!\n",cup_price[n-1]);
    printf("Well done! The Price of this cocktail is %d!\n",sum);
}

int gcd(int a,int b){
    if(b==1) return 1;
    else if(b==0) return a;
    return gcd(b,a%b);
}
