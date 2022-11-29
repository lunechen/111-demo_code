#include <stdio.h>
int w1w2(int m, int n){
    if (n == 0){
        return m;
    }else{
        return w1w2(n, m % n);
    }
}
int basewine(){
        int b;
        printf("Let's select the base wine!\n");
        printf("Please Enter flavor level of the base wine: ");
        scanf("%d",&b);
        printf("The flavor level is %d!\n",b);
        return b;
  }
int twowine(){
    int w1,w2;
    printf("Now add two kinds of wines.\n");
    printf("Please Enter two types representing each wine: ");
    scanf("%d %d", &w1, &w2);
    printf("The flavor level increased %d!\n",w1w2(w1,w2)); //增加
    return w1w2(w1,w2);
}
int shake(){
  printf("Now shake.\n");
  int shake_accum=0,s;
  while(1){
    printf("Please enter the power of a shake(0 to stop): ");
    scanf("%d",&s);
    shake_accum+=s;
    if(s==0) break;   
  }
  printf("The flavor level increased %d!\n",shake_accum);
  return shake_accum; 
}
int juice(){
  int j;
  printf("Now add some juice.\n");
  printf("Please Enter flavor level of the juice: ");
  scanf("%d",&j);
  printf("The flavor level increased %d!\n",j);
  return j;
  }
int co2(int f){
  int c;
  printf("Now add some CO2.\n");
  printf("The current flavor level is %d.\n",f); //flavor_level
  printf("Please Enter power of CO2: ");
  scanf("%d",&c);
  if(c <= f/2) c*=2;
  else if(c > f/2 && c <= f) c*=3;
  else if(c > f) c*=1;
  printf("The flavor level increased %d!\n",c);
  return c;
}
int addcup(){
    int cup;
    printf("Finally, select a wine glass to pull your cocktail in.\n");
    printf("Please enter the number of wine glass(1 to 5): ");
    scanf("%d",&cup);
    if(cup==1) cup=10;
    else if(cup==2) cup=15;
    else if(cup==3) cup=17;
    else if(cup==4) cup=23;
    else if(cup==5) cup=40;
    printf("The price increased %d!\n",cup);
    return cup;
  }
  
int main(){
  int flavor_level=0,flavor_level1=0;
  printf("Let's make our first cocktail!\n");
  flavor_level1+=basewine();
  flavor_level1+=twowine();
  flavor_level1+=twowine();
  flavor_level1+=shake();
  flavor_level1+=juice();
  flavor_level1+=co2(flavor_level1);
  flavor_level1+=addcup();
  printf("Well done! The Price of this cocktail is %d!\n",flavor_level1); 
  printf("Let's make our second cocktail!\n");
  flavor_level+=basewine();
  flavor_level+=twowine();
  flavor_level+=shake();
  flavor_level+=juice();
  flavor_level+=shake();
  flavor_level+=co2(flavor_level);
  flavor_level+=twowine();
  flavor_level+=co2(flavor_level);
  flavor_level+=juice();
  flavor_level+=shake();
  flavor_level+=twowine();
  flavor_level+=shake();
  flavor_level+=twowine();
  flavor_level+=juice();
  flavor_level+=co2(flavor_level);
  flavor_level+=shake();
  flavor_level+=co2(flavor_level);
  flavor_level+=twowine();
  flavor_level+=shake();
  flavor_level+=juice();
  flavor_level+=juice();
  flavor_level+=twowine();
  flavor_level+=twowine();
  flavor_level+=co2(flavor_level);
  flavor_level+=shake();
  flavor_level+=twowine();
  flavor_level+=shake();
  flavor_level+=twowine();
  flavor_level+=shake();
  flavor_level+=addcup();
  printf("Well done! The Price of this cocktail is %d!\n",flavor_level);
}
