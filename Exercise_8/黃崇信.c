#include <stdio.h>
#include <stdlib.h>
int base_function(){
    int base;
    printf("Let's select the base wine!\nPlease Enter flavor level of the base wine: ");
    scanf("%d",&base);
    printf("The flavor level is %d!\n",base);
    return base;
}

void increasing_text(int increasing_flavor){
    printf("The flavor level increased %d!\n",increasing_flavor);
}

int two_wines(){
    int w1, w2;
    printf("Now add two kinds of wines.\n");
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&w1,&w2);
    int max = 0;
    for (int i = 1; w1 >= i && w2 >= i; i++){
         if (w1 % i == 0 && w2 % i == 0){
            max = i;
         }
     }
     return max;

}
int juice(){
    int juice;
    printf("Now add some juice.\n");
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&juice);
    printf("The flavor level increased %d!\n",juice);
    return juice;
   

}
int shake(){
    int shake = 1;
    int increasing_flavor = 0;
    printf("Now shake.\n");
        while (shake != 0){ 
            printf ("Please enter the power of a shake(0 to stop): ");
            scanf ("%d", &shake);
            for(int i = 0; i < shake; i++)
                increasing_flavor += 1;
        }
    return increasing_flavor;   
}
int CO2(int f){
    int c;
    printf("Now add some CO2.\n");
    printf("The current flavor level is %d.\n",f);
    printf("Please Enter power of CO2: ");
    scanf("%d",&c);
    if (c <= f / 2) c *= 2;
    else if ((f / 2 < c) && (c <= f)) c *= 3;
    else if (c > f) c+=0;
    return c;
}
int  glass_array(int flavor){
    int glass_number;
    int a[5] = {10 , 15 , 17 , 23 , 40};
    printf("Finally, select a wine glass to pull your cocktail in.\n");
    printf("Please enter the number of wine glass(1 to 5): ");
    scanf("%d",&glass_number);
    printf("The price increased %d!\n",a[glass_number-1]);
    flavor += a[glass_number-1];
    printf("Well done! The Price of this cocktail is %d!\n",flavor);
    return flavor;
}
int main (){
    int flavor_global = 0 ,volue=0;
    printf("Let's make our first cocktail!\n");
    volue = base_function();
    flavor_global += volue;

    for (int i=0 ; i < 2 ; i++){
        volue = two_wines();
        increasing_text(volue);
        flavor_global += volue;
    }
    volue=shake();
    increasing_text(volue);
    flavor_global += volue;
    
    volue = juice();
    flavor_global += volue;

    volue = CO2(flavor_global);
    increasing_text(volue);
    flavor_global += volue;

    volue = glass_array(flavor_global);
    flavor_global = volue;

    printf("Let's make our second cocktail!\n");
    flavor_global = 0;
    volue = base_function();
    flavor_global += volue;

    volue = two_wines();
    increasing_text(volue);
    flavor_global += volue;

    volue=shake();
    increasing_text(volue);
    flavor_global += volue;

    volue = juice();
    flavor_global += volue;
    
    volue=shake();
    increasing_text(volue);
    flavor_global += volue;

    volue = CO2(flavor_global);
    increasing_text(volue);
    flavor_global += volue;

    volue = two_wines();
    increasing_text(volue);
    flavor_global += volue;

    volue = CO2(flavor_global);
    increasing_text(volue);
    flavor_global += volue;

    volue = juice();
    flavor_global += volue;

    volue=shake();
    increasing_text(volue);
    flavor_global += volue;

    volue = two_wines();
    increasing_text(volue);
    flavor_global += volue;

    volue=shake();
    increasing_text(volue);
    flavor_global += volue;

    volue = two_wines();
    increasing_text(volue);
    flavor_global += volue;

    volue = juice();
    flavor_global += volue;

    volue = CO2(flavor_global);
    increasing_text(volue);
    flavor_global += volue;

    volue=shake();
    increasing_text(volue);
    flavor_global += volue;

    volue = CO2(flavor_global);
    increasing_text(volue);
    flavor_global += volue;

    volue = two_wines();
    increasing_text(volue);
    flavor_global += volue;

    volue=shake();
    increasing_text(volue);
    flavor_global += volue;

    for(int i = 0; i < 2; i++){
        volue = juice();
        flavor_global += volue;
    }

    for(int i = 0; i < 2; i++){  
        volue = two_wines();
        increasing_text(volue);
        flavor_global += volue; 
    }

    volue = CO2(flavor_global);
    increasing_text(volue);
    flavor_global += volue;

    for(int i = 0; i < 2; i++){
        volue=shake();
        increasing_text(volue);
        flavor_global += volue;

        volue = two_wines();
        increasing_text(volue);
        flavor_global += volue;
    }

    volue=shake();
    increasing_text(volue);
    flavor_global += volue;

    volue = glass_array(flavor_global);
    flavor_global = volue;

    return 0;
}
