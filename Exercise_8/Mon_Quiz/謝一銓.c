#include<stdio.h>
int b;
int w1,w2;
int current_price; 
int Action2(int w1 ,int w2); 
int Action4(int CO2_power);  int c;
int Action6(int cup);        int price; int glass_cup;
int power=1,power_increased=0;
int juice;

int main(){
    printf("Let's make our first cocktail!\n");//開始

    printf("Let's select the base wine!\n");//1.base wine
    printf("Please Enter flavor level of the base wine: ");
    scanf("%d",&b);
    printf("The flavor level is %d!\n",b);
    current_price+=b;

    printf("Now add two kinds of wines.\n");//2.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now add two kinds of wines.\n");//3.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now shake.\n");//4.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add some juice.\n");//5.add juice
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&juice);
    printf("The flavor level increased %d!\n",juice);
    current_price+=juice;

    printf("Now add some CO2.\n");//6.add CO2
    printf("The current flavor level is %d.\n",current_price);
    printf("Please Enter power of CO2: ");
    scanf("%d",&c);
    printf("The flavor level increased %d!\n",Action4(c));
    current_price+=Action4(c);
    

    printf("Finally, select a wine glass to pull your cocktail in.\n");//7.select cup
    printf("Please enter the number of wine glass(1 to 5): ");
    scanf("%d",&glass_cup);
    printf("The price increased %d!\n",Action6(glass_cup));
    current_price+=price;
    printf("Well done! The Price of this cocktail is %d!\n",current_price);

    printf("Let's make our second cocktail!\n");//second part
    current_price=0;  

    printf("Let's select the base wine!\n");//1.base wine
    printf("Please Enter flavor level of the base wine: ");
    scanf("%d",&b);
    printf("The flavor level is %d!\n",b);
    current_price+=b;

    printf("Now add two kinds of wines.\n");//2.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now shake.\n");//3.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add some juice.\n");//4.add juice
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&juice);
    printf("The flavor level increased %d!\n",juice);
    current_price+=juice;

    printf("Now shake.\n");//5.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add some CO2.\n");//6.add CO2
    printf("The current flavor level is %d.\n",current_price);
    printf("Please Enter power of CO2: ");
    scanf("%d",&c);
    printf("The flavor level increased %d!\n",Action4(c));
    current_price+=Action4(c);

    printf("Now add two kinds of wines.\n");//7.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now add some CO2.\n");//8.add CO2
    printf("The current flavor level is %d.\n",current_price);
    printf("Please Enter power of CO2: ");
    scanf("%d",&c);
    printf("The flavor level increased %d!\n",Action4(c));
    current_price+=Action4(c);

    printf("Now add some juice.\n");//9.add juice
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&juice);
    printf("The flavor level increased %d!\n",juice);
    current_price+=juice;

    printf("Now shake.\n");//10.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add two kinds of wines.\n");//11.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now shake.\n");//12.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add two kinds of wines.\n");//13.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now add some juice.\n");//14.add juice
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&juice);
    printf("The flavor level increased %d!\n",juice);
    current_price+=juice;

    printf("Now add some CO2.\n");//15.add CO2
    printf("The current flavor level is %d.\n",current_price);
    printf("Please Enter power of CO2: ");
    scanf("%d",&c);
    printf("The flavor level increased %d!\n",Action4(c));
    current_price+=Action4(c);

    printf("Now shake.\n");//16.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add some CO2.\n");//17.add CO2
    printf("The current flavor level is %d.\n",current_price);
    printf("Please Enter power of CO2: ");
    scanf("%d",&c);
    printf("The flavor level increased %d!\n",Action4(c));
    current_price+=Action4(c);

    printf("Now add two kinds of wines.\n");//18.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now shake.\n");//19.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add some juice.\n");//20.add juice
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&juice);
    printf("The flavor level increased %d!\n",juice);
    current_price+=juice;

    printf("Now add some juice.\n");//21.add juice
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&juice);
    printf("The flavor level increased %d!\n",juice);
    current_price+=juice;

    printf("Now add two kinds of wines.\n");//22.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now add two kinds of wines.\n");//23.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now add some CO2.\n");//24.add CO2
    printf("The current flavor level is %d.\n",current_price);
    printf("Please Enter power of CO2: ");
    scanf("%d",&c);
    printf("The flavor level increased %d!\n",Action4(c));
    current_price+=Action4(c);

    printf("Now shake.\n");//25.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add two kinds of wines.\n");//26.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now shake.\n");//27.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;

    printf("Now add two kinds of wines.\n");//28.add two kinds wines
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    printf("The flavor level increased %d!\n",Action2(w1,w2));
    current_price+=Action2(w1,w2);

    printf("Now shake.\n");//29.shake
    while(power!=0){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&power);
        current_price+=power;
        power_increased+=power;
    }
    printf("The flavor level increased %d!\n",power_increased);
    power_increased=0; power=1;
    
    printf("Finally, select a wine glass to pull your cocktail in.\n");//30.select cup
    printf("Please enter the number of wine glass(1 to 5): ");
    scanf("%d",&glass_cup);
    printf("The price increased %d!\n",Action6(glass_cup));
    current_price+=price;
    printf("Well done! The Price of this cocktail is %d!\n",current_price);
    return 0;
}

int Action2(int w1 ,int w2){
    int gcd=1;
    int i=2;
     if( w1==1 || w2==1 ) return 1;
     if( w1==0 || w2==0 ) return 0;
     else if( w1>=i && w2>=i ){
         while( w1>=i && w2>=i ){
                while( w1%i==0 && w2%i==0 ){
                    gcd = gcd * i;
                    w1/= i;
                    w2 /= i;
               }
               i++;
          }
          return gcd;
     }
}

int Action4(int CO2_power){
    if (CO2_power<=current_price/2){
        return CO2_power*2;
    }else if((current_price/2)<CO2_power && CO2_power<=current_price){
        return CO2_power*3;
    }else if(CO2_power>current_price){
        return CO2_power;
    }
}

int Action6(int cup){
    switch(cup){
        case 1: 
            price=10;
            break;
        case 2: 
            price=15;
            break;
        case 3: 
            price=17;
            break;
        case 4: 
            price=23;
            break;
        case 5: 
            price=40;
            break;
    }
    return price;
}
