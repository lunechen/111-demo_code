#include <stdio.h>
#include <ctype.h>

int main(void) {
  char ch;
  int a[27]={0};
  int byt=0,low=0,upper=0,digit=0,space=0,line=0,alpha=0,flag=1;

  while((ch=getchar())!=EOF)
    {
      ++byt;

      if(flag!=0)
      {
        ++line;
        flag=0;
      }

      if(islower(ch))++low;
      if(isupper(ch))++upper;
      if(isspace(ch))++space;
      if(isalpha(ch))++alpha;

      if(isdigit(ch))
      {
          ++digit;

      }

      if(ch=='\n')
      {
        ++flag;
      }

      for(int i='A';i<='Z';i++)
      {
        if(ch==i)++a[i-'A'];
      }

      for(int i='a';i<='z';i++)
      {
        if(ch==i)++a[i-'a'];
      }

    }

  printf("Bytes Count: %d\n",byt);
  printf("Lowercase Count: %d\n",low);
  printf("Uppercase Count: %d\n",upper);
  printf("Digit Count: %d\n",digit);
  printf("Whitespace Count: %d\n",space);
  printf("Line Count: %d\n",line);

  for(int i=0;i<26;i++)
  {
    if(alpha==0)
      printf("%c/%c: %d, 0.000\n",'A'+i ,'a'+i ,a[i]);
    else
      printf("%c/%c: %d, %.3f\n",'A'+i ,'a'+i ,a[i],a[i]/(float)alpha);
  }

  return 0;
}
