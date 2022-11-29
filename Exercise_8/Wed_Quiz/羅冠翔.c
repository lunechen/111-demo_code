#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum MessangeTable
{
    START,
    SELECT_BASE_WINE,
    FLAVOR_LEVEL,
    ADD_TWO_WINE,
    FLAVOR_INCREASING,
    ADD_JUICE,
    ADD_CO2,
    NOW_SHAKE,
    SHAKE,
    PULL_INTO_GLASS,
    PRICE_INCREASING,
    PRICE_SUM
} messange;

typedef struct
{
    bool type; // 1: first, 0: second
    int flavor;
    int price;
} wine;

// Game

void WineInitialize(wine *w, bool type);
void MakeFirstWine(wine *w);
void MakeSecondWine(wine *w);

// print

void PrintLevel(messange mes, int num);
void PrintMessange(messange mes, wine *w);

// action

void SelectBaseWine(wine *w);
void AddTwoWine(wine *w);
void AddJuice(wine *w);
void AddCO2(wine *w);
void Shake(wine *w);
void PullIntoGlass(wine *w);

// Tool

int gcd(int a, int b);

int main()
{
    wine w;
    MakeFirstWine(&w);
    MakeSecondWine(&w);
    return 0;
}

void WineInitialize(wine *w, bool type)
{
    w->flavor = 0;
    w->price = 0;
    w->type = type;
}

void MakeFirstWine(wine *w)
{
    WineInitialize(w, 1);
    PrintMessange(START, w);
    SelectBaseWine(w);
    AddTwoWine(w);
    AddTwoWine(w);
    Shake(w);
    AddJuice(w);
    AddCO2(w);
    PullIntoGlass(w);
}

void MakeSecondWine(wine *w)
{
    WineInitialize(w, 0);
    PrintMessange(START, w);
    SelectBaseWine(w);
    AddTwoWine(w);
    Shake(w);
    AddJuice(w);
    Shake(w);
    AddCO2(w);
    AddTwoWine(w);
    AddCO2(w);
    AddJuice(w);
    Shake(w);
    AddTwoWine(w);
    Shake(w);
    AddTwoWine(w);
    AddJuice(w);
    AddCO2(w);
    Shake(w);
    AddCO2(w);
    AddTwoWine(w);
    Shake(w);
    AddJuice(w);
    AddJuice(w);
    AddTwoWine(w);
    AddTwoWine(w);
    AddCO2(w);
    Shake(w);
    AddTwoWine(w);
    Shake(w);
    AddTwoWine(w);
    Shake(w);
    PullIntoGlass(w);
}

void PrintLevel(messange mes, int num)
{
    if (mes == FLAVOR_LEVEL)
        printf("The flavor level is %d!\n", num);
    if (mes == FLAVOR_INCREASING)
        printf("The flavor level increased %d!\n", num);
    if (mes == PRICE_INCREASING)
        printf("The price increased %d!\n", num);
    if (mes == PRICE_SUM)
        printf("Well done! The Price of this cocktail is %d!\n", num);
}

void PrintMessange(messange mes, wine *w)
{
    if (mes == START)
        printf("Let's make our %s cocktail!\n", (w->type ? "first" : "second"));
    if (mes == SELECT_BASE_WINE)
        printf("Let's select the base wine!\n"
               "Please Enter flavor level of the base wine: ");
    if (mes == ADD_TWO_WINE)
        printf("Now add two kinds of wines.\n"
               "Please Enter two types representing each wine: ");
    if (mes == ADD_JUICE)
        printf("Now add some juice.\n"
               "Please Enter flavor level of the juice: ");
    if (mes == ADD_CO2)
        printf("Now add some CO2.\n"
               "The current flavor level is %d.\n"
               "Please Enter power of CO2: ",
               w->flavor);
    if (mes == NOW_SHAKE)
        printf("Now shake.\n");
    if (mes == SHAKE)
        printf("Please enter the power of a shake(0 to stop): ");
    if (mes == PULL_INTO_GLASS)
        printf("Finally, select a wine glass to pull your cocktail in.\n"
               "Please enter the number of wine glass(1 to 5): ");
}

void SelectBaseWine(wine *w)
{
    PrintMessange(SELECT_BASE_WINE, w);
    int a;
    scanf(" %d", &a);
    w->flavor += a;
    PrintLevel(FLAVOR_LEVEL, w->flavor);
}

void AddTwoWine(wine *w)
{
    PrintMessange(ADD_TWO_WINE, w);
    int a, b;
    scanf(" %d %d", &a, &b);
    int c = gcd(a, b);
    w->flavor += c;
    PrintLevel(FLAVOR_INCREASING, c);
}

void AddJuice(wine *w)
{
    PrintMessange(ADD_JUICE, w);
    int a;
    scanf(" %d", &a);
    w->flavor += a;
    PrintLevel(FLAVOR_INCREASING, a);
}

void AddCO2(wine *w)
{
    PrintMessange(ADD_CO2, w);
    int a;
    scanf(" %d", &a);
    if (a <= w->flavor / 2)
        a *= 2;
    else if (w->flavor / 2 < a && a <= w->flavor)
        a *= 3;
    w->flavor += a;
    PrintLevel(FLAVOR_INCREASING, a);
}

void Shake(wine *w)
{
    int a, sum = 0;
    PrintMessange(NOW_SHAKE, w);
    while (1)
    {
        PrintMessange(SHAKE, w);
        scanf(" %d", &a);
        if (!a)
            break;
        sum += a;
    }
    w->flavor += sum;
    PrintLevel(FLAVOR_INCREASING, sum);
}

void PullIntoGlass(wine *w)
{
    PrintMessange(PULL_INTO_GLASS, w);
    int a, p = 0;
    scanf(" %d", &a);
    if (a == 1)
        p += 10;
    else if (a == 2)
        p += 15;
    else if (a == 3)
        p += 17;
    else if (a == 4)
        p += 23;
    else if (a == 5)
        p += 40;
    w->price += w->flavor;
    w->price += p;
    PrintLevel(PRICE_INCREASING, p);
    PrintLevel(PRICE_SUM, w->price);
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
