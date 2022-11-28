#include <stdio.h>

void base ();
void wine ();
void juice ();
void co ();
void shake ();
void glass ();

int price=0;

int main(){
    printf("Let's make our first cocktail!\n");

    base();
    wine();
    wine();
    shake();
    juice();
    co();
    glass();

    printf("Let's make our second cocktail!\n");
    price=0;

    base();
    wine();
    shake();
    juice();
    shake();

    co();
    wine();
    co();
    juice();
    shake();

    wine();
    shake();
    wine();
    juice();
    co();

    shake();
    co();
    wine();
    shake();
    juice();

    juice();
    wine();
    wine();
    co();
    shake();

    wine();
    shake();
    wine();
    shake();
    glass();

    return 0;
}

void base (){
    printf("Let's select the base wine!\n");
    printf("Please Enter flavor level of the base wine: ");
    int b=0;
    scanf("%d",&b);

    printf("The flavor level is %d!\n",b);
    price+=b;
}

void wine (){
    printf("Now add two kinds of wines.\n");
    printf("Please Enter two types representing each wine: ");
    int w1,w2;
    scanf("%d %d",&w1,&w2);

    for (int i=w1>w2?w2:w1;i>0;i--){
        if(w1%i==0&&w2%i==0){
            printf("The flavor level increased %d!\n",i);
            price+=i;
            break;
        }
    }
}

void juice (){
    printf("Now add some juice.\n");
    printf("Please Enter flavor level of the juice: ");
    int j;
    scanf("%d",&j);

    printf("The flavor level increased %d!\n",j);
    price+=j;
}

void co (){
    printf("Now add some CO2.\n");
    printf("The current flavor level is %d.\n",price);
    printf("Please Enter power of CO2: ");
    int c;
    scanf("%d",&c);

    if(c<=price/2) c*=2;
    else if(c>price/2&&c<=price) c*=3;

    printf("The flavor level increased %d!\n",c);
    price+=c;
}

void shake (){
    printf("Now shake.\n");
    int s=0,sum=0;
    while(1){
       printf("Please enter the power of a shake(0 to stop): ");
       scanf("%d",&s);
       if(s==0) break;
       sum+=s;
    }
    printf("The flavor level increased %d!\n",sum);
    price+=sum;
}

void glass (){
    printf("Finally, select a wine glass to pull your cocktail in.\n");
    printf("Please enter the number of wine glass(1 to 5): ");
    int glass;
    scanf("%d",&glass);

    switch(glass){
        case 1:
            glass=10;
            break;

        case 2:
            glass=15;
            break;

        case 3:
            glass=17;
            break;

        case 4:
            glass=23;
            break;

        case 5:
            glass=40;
    }

    printf("The price increased %d!\n",glass);
    price+=glass;
    printf("Well done! The Price of this cocktail is %d!\n",price);
}
