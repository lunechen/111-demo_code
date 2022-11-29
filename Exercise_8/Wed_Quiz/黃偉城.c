#include<stdio.h>

void select_base_wine();
void add_two_wines();
void add_juice();
void add_co2();
void shake();
void pull();

int f = 0 ;

int main(){

    printf("Let's make our first cocktail!\n");
    
    select_base_wine() ;
    add_two_wines();
    add_two_wines();
    shake();
    add_juice();
    add_co2();
    pull();
    printf("Let's make our second cocktail!\n");
    f = 0 ;
    select_base_wine();
    add_two_wines();
    shake();
    add_juice();
    shake();
    add_co2();
    add_two_wines();
    add_co2();
    add_juice();
    shake();
    add_two_wines();
    shake();
    add_two_wines();
    add_juice();
    add_co2();
    shake();
    add_co2();
    add_two_wines();
    shake();
    add_juice();
    add_juice();
    add_two_wines();
    add_two_wines();
    add_co2();
    shake();
    add_two_wines();
    shake();
    add_two_wines();
    shake();
    pull();

    return 0 ;
}

void select_base_wine(){

    int b ;
    printf("Let's select the base wine!\nPlease Enter flavor level of the base wine: ") ;
    scanf("%d",&b);
    printf("The flavor level is %d!\n",b) ;

    f += b ;

}

void add_two_wines(){
    printf("Now add two kinds of wines.\nPlease Enter two types representing each wine: ");
    int x,y ;
    scanf("%d %d",&x,&y) ;
    int temp = 0;
    
    if(x > y){
        for(int i=1 ; i<=y ; i++){
            if(x % i == 0 && y % i == 0){
                temp = i ;
            }
        }
    }
    else if(x < y){
        for(int i=1 ; i<=x ; i++){
            if(x % i == 0 && y % i == 0){
                temp = i ;
            }
        }
    }
    f += temp ;
    printf("The flavor level increased %d!\n",temp);
}

void add_juice(){
    printf("Now add some juice.\nPlease Enter flavor level of the juice: ");
    int j ;
    scanf("%d",&j);
    f += j ;
    printf("The flavor level increased %d!\n",j);
}

void add_co2(){
    printf("Now add some CO2.\nThe current flavor level is %d.\nPlease Enter power of CO2: ",f);
    int c ;
    scanf("%d",&c) ;
    if(c <= f/2) c *= 2 ;
    else if(c >= f/2 && c <= f) c *= 3 ;
    else if(c >f) c = c ;

    f += c ;
    printf("The flavor level increased %d!\n",c) ;
}

void shake(){

    printf("Now shake.\nPlease enter the power of a shake(0 to stop): ");
    int s ,temp=0;
    scanf("%d",&s);

    while(s != 0){
        temp += s ;
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&s);
    } 

    f += temp ;
    printf("The flavor level increased %d!\n",temp);
}

void pull(){
    printf("Finally, select a wine glass to pull your\ncocktail in.\nPlease enter the number of wine glass(1 to 5): ") ;

    int num ;
    scanf("%d",&num);
    switch(num)
    {
        case 1 :
            printf("The price increased 10!\n") ;
            f += 10 ;
            break ;
        case 2 :
            printf("The price increased 15!\n") ;
            f += 15 ;
            break ;
        case 3 :
            printf("The price increased 17!\n") ;
            f += 17 ;
            break ;
        case 4 :
            printf("The price increased 23!\n") ;
            f += 23 ;
            break ;
        case 5 :
            printf("The price increased 40!\n") ;
            f += 40 ;
            break ;
    }

    printf("Well done! The Price of this cocktail is %d!\n",f) ;

}
