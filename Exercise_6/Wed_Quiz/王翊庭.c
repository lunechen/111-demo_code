#include <stdio.h>
#include <ctype.h>

int main(){
  char c;
  typedef long long int num;
  typedef float dot;
  int i=0;
  num sum=0,lower=0,upper=0,digit=0,space=0,line=0,alpha=0,lineplus=1;
  num alphaTime[26]={0};
  while((c=getchar()) != EOF){
    if(lineplus){
      line++;
      lineplus=0;
    }
    if(isalpha(c)){
      alpha++;
      if(isupper(c)) upper++;
      if(islower(c)) lower++;
      c=tolower(c);
      alphaTime[(int)c-'a']++;
    }
    if(isdigit(c)) digit++;
    if(isspace(c)) space++;
    if(c=='\n') lineplus++;
    sum++;
  }
  printf("\nBytes Count: %d\n",sum);
  printf("Lowercase Count: %d\n",lower);
  printf("Uppercase Count: %d\n",upper);
  printf("Digit Count: %d\n",digit);
  printf("Whitespace Count: %d\n",space);
  printf("Line Count: %d\n",line);
  for(i==0;i<26;i++){
    printf("%c/%c: %d, %.3f\n",'A'+i,'a'+i,alphaTime[i],alphaTime[i]/1.0/alpha);
  }
  return 0;
}
