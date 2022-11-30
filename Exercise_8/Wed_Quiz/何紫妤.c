#include <stdio.h>

void base();
void gcd();
void shake();
void juice();
void CO2();
void glass();

int b;

int main(){

    //first cocktail
    printf("Let's make our first cocktail!\n");
    base();
    gcd();
    gcd();
    shake();
    juice();
    CO2();
    glass();

    //second cocktail
    printf("Let's make our second cocktail!\n");
    b = 0;
    base();
    gcd();
    shake();
    juice();
    shake();
    CO2();
    gcd();
    CO2();
    juice();
    shake();
    gcd();
    shake();
    gcd();
    juice();
    CO2();

    shake();
    CO2();
    gcd();
    shake();
    juice();
    juice();
    gcd();
    gcd();
    CO2();
    shake();
    gcd();
    shake();
    gcd();
    shake();
    glass();

    return 0;
}

void base(){
    printf("Let's select the base wine!\n");
    printf("Please Enter flavor level of the base wine: ");
    scanf("%d", &b);
    printf("The flavor level is %d!\n", b);
}

void gcd(){
    int w1,w2;
    int gcd;
    printf("Now add two kinds of wines.\n");
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d", &w1, &w2);
    for(int i = 1; i <= w1 && i <= w2; i++){
        if(w1%i == 0 && w2%i == 0) gcd = i;
    }
    printf("The flavor level increased %d!\n", gcd);
    b = b + gcd;
}

void shake(){
    printf("Now shake.\n");
    int S;
    int sum = 0;
    while(1){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d", &S);
        sum += S;
        if(S == 0) break;
    }
    printf("The flavor level increased %d!\n", sum);
    b = b + sum;
}

void juice(){
    int j;
    printf("Now add some juice.\n");
    printf("Please Enter flavor level of the juice: ");
    scanf("%d", &j);
    printf("The flavor level increased %d!\n", j);
    b = b + j;
}

void CO2(){
    int c;
    printf("Now add some CO2.\n");
    printf("The current flavor level is %d.\n", b);
    printf("Please Enter power of CO2: ");
    scanf("%d", &c);
    if(c <= b / 2){
        c *= 2;
    }else if(b / 2 < c && c <= b){
        c *= 3;
    }
    printf("The flavor level increased %d!\n", c);
    b = b + c;
}

void glass(){
    int t;
    int price;
    printf("Finally, select a wine glass to pull your cocktail in.\n");
    printf("Please enter the number of wine glass(1 to 5): ");
    scanf("%d", &t);
    switch(t){
        case 1:
            t = 10;
            break;
        case 2:
            t = 15;
            break;
        case 3:
            t = 17;
            break;
        case 4:
            t = 23;
            break;
        case 5:
            t = 40;
            break;
    }
    printf("The price increased %d!\n", t);
    price = b + t;
    printf("Well done! The Price of this cocktail is %d!\n", price);
}

