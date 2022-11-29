#include <stdio.h>
#include <stdbool.h>
int Greatest_common_factor(int a,int b){
    int ans = 1;
    int i = 2;

    if( a == 1 || b == 1 ) return 1;
    if( a == 0 || b == 0 ) return 0;
    else if( a >= i && b >= i ){
        
        while( a >= i && b >= i ) { 
             
            while( a % i == 0 && b % i == 0 ) { 
                ans = ans * i; 
                a /= i; 
                b /= i; 
            } 
            i++; 
        } 
        return ans; 
    }
    else return -1;
}
void print_leval_increase(int num){
    printf("The flavor level increased %d!\n", num);
}
void Select_the_base_wine(int *flavor){
    int b;
    printf("Let's select the base wine!\n");
    printf("Please Enter flavor level of the base wine: ");
    scanf("%d", &b);
    (*flavor) = b;
    printf("The flavor level is %d!\n", *flavor);
}
void Add_two_wines(int *flavor){
    int x, w1, w2;
    printf("Now add two kinds of wines.\n");
    printf("Please Enter two types representing each wine: ");
    scanf("%d%d", &w1, &w2);
    x = Greatest_common_factor(w1, w2);
    (*flavor) += x;
    print_leval_increase(x);
}
void Add_juice(int *flavor){
    int j;
    printf("Now add some juice.\n");
    printf("Please Enter flavor level of the juice: ");
    scanf("%d", &j);
    (*flavor) += j;
    print_leval_increase(j);
}
void Add_CO2(int *flavor){
    int c;
    printf("Now add some CO2.\n");
    printf("The current flavor level is %d.\n", *flavor);
    printf("Please Enter power of CO2: ");
    scanf("%d", &c);
    if (c <= (*flavor) / 2){
        (*flavor) += 2*c;
        print_leval_increase(2*c);
    } else if(c <= (*flavor)){
        (*flavor) += 3*c;
        print_leval_increase(3*c);
    } else{
        (*flavor) += c;
        print_leval_increase(c);
    }
}
void Shake(int *flavor){
    int s;
    int sum = 0;
    printf("Now shake.\n");
    while (1){
        printf("Please enter the power of a shake(0 to stop): ");
        scanf("%d", &s);
        if (s == 0) break;
        sum += s;
    }
    (*flavor) += sum;
    print_leval_increase(sum);
}
void Pull_into_a_glass(int *flavor){
    int t;
    int price = (*flavor);
    int increase = 0;
    printf("Finally, select a wine glass to pull your cocktail in.\n");
    printf("Please enter the number of wine glass(1 to 5): ");
    scanf("%d", &t);
    switch (t){
        case 1:
            increase = 10;
            break;
        case 2:
            increase = 15;
            break;
        case 3:
            increase = 17;
            break;
        case 4:
            increase = 23;
            break;
        case 5:
            increase = 40;
            break;
        default:
            break;
    }
    price += increase;
    printf("The price increased %d!\n", increase);
    printf("Well done! The Price of this cocktail is %d!\n", price);
}

int main(void){
    int flavor_1 = 0, flavor_2 = 0;
    int action1[7] = {1,2,2,5,3,4,6};
    printf("Let's make our first cocktail!\n");
    for (int i = 0; i < 7;i++){
        switch(action1[i]){
            case 1:
                Select_the_base_wine(&flavor_1);
                break;
            case 2:
                Add_two_wines(&flavor_1);
                break;
            case 3:
                Add_juice(&flavor_1);
                break;
            case 4:
                Add_CO2(&flavor_1);
                break;
            case 5:
                Shake(&flavor_1);
                break;
            case 6:
                Pull_into_a_glass(&flavor_1);
                break;
            default:
                break;
        }
    }
    int action2[30] = {1,2,5,3,5,4,2,4,3,5,2,5,2,3,4,5,4,2,5,3,3,2,2,4,5,2,5,2,5,6};
    printf("Let's make our second cocktail!\n");
    for (int i = 0; i < 30;i++){
        switch(action2[i]){
            case 1:
                Select_the_base_wine(&flavor_2);
                break;
            case 2:
                Add_two_wines(&flavor_2);
                break;
            case 3:
                Add_juice(&flavor_2);
                break;
            case 4:
                Add_CO2(&flavor_2);
                break;
            case 5:
                Shake(&flavor_2);
                break;
            case 6:
                Pull_into_a_glass(&flavor_2);
                break;
            default:
                break;
        }
    }

}
