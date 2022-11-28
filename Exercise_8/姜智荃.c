#include<stdio.h>
void pour_base();
void add_two_wine();
void add_co2();
void add_juice();
void shake();
void pour_in_glass();
int level=0;
int main()
{
    //first cup
    printf("Let's make our first cocktail!\n");
    pour_base();
    add_two_wine();
    add_two_wine();
    shake();
    add_juice();
    add_co2();
    pour_in_glass();

    //second
    level=0;
    printf("\nLet's make our second cocktail!\n");
    pour_base();
    add_two_wine();
    shake();
    add_juice();
    shake();//5
    add_co2();
    add_two_wine();
    add_co2();
    add_juice();
    shake();//10
    add_two_wine();
    shake();
    add_two_wine();
    add_juice();
    add_co2();//15
    shake();
    add_co2();
    add_two_wine();
    shake();
    add_juice();//20
    add_juice();
    add_two_wine();
    add_two_wine();
    add_co2();
    shake();//25
    add_two_wine();
    shake();
    add_two_wine();
    shake();
    pour_in_glass();//30
}
void pour_base()
{
    int base;
    printf("Let's select the base wine!");
    printf("\nPlease Enter flavor level of the base wine: ");
    scanf("%d",&base);
    level=base;
    printf("The flavor level is %d!",level);
}
void add_two_wine()
{
    int wine1,wine2,largest_common=0;
    printf("\nNow add two kinds of wines.\n");
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d",&wine1,&wine2);
    for(int i=1;i<=(wine1<wine2?wine1:wine2);i++)
    {
        if(wine1%i==0 && wine2%i==0)
        {
            largest_common=i;
        }
    }
    printf("The flavor level increased %d!",largest_common);
    level+=largest_common;
}
void add_co2()
{
    int co2,increment=0;;
    printf("\nNow add some CO2.\n");
    printf("The current flavor level is %d.\n",level);
    printf("Please Enter power of CO2: ");
    scanf("%d",&co2);
    if(co2<=(level/2))
    {
        increment=2*co2;
    }
    else if((co2>level/2) && co2<=level)
    {
        increment=3*co2;
    }
    else if(co2>level)
    {
        increment=co2;
    }
    level+=increment;
    printf("The flavor level increased %d!",increment);
}
void add_juice()
{
    int juice;
    printf("\nNow add some juice.\n");
    printf("Please Enter flavor level of the juice: ");
    scanf("%d",&juice);
    printf("The flavor level increased %d!",juice);
    level+=juice;
}
void shake()
{
    int shake_times,sum=0;
    printf("\nNow shake.\n");
    while(1)
    {
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d",&shake_times);
        sum+=shake_times;
        if(shake_times==0)
            break;
    }
    level+=sum;
    printf("The flavor level increased %d!",sum);
}
void pour_in_glass()
{
    int glass,increment=0;
    printf("\nFinally, select a wine glass to pull your cocktail in.\n");
    printf("Please enter the number of wine glass(1 to 5): ");
    scanf("%d",&glass);
    if(glass==1)
    {
        increment=10;
    }
    else if(glass==2)
    {
        increment=15;
    }
    else if(glass==3)
    {
        increment=17;
    }
    else if(glass==4)
    {
        increment=23;
    }
    else if(glass==5)
    {
        increment=40;
    }
    level+=increment;
    printf("The price increased %d!\n",increment);
    printf("Well done! The Price of this cocktail is %d!",level);
}
