#include<stdio.h>
#include<ctype.h>
int main()
{
    int bytes=0,lowercase=0,uppercase=0,digit=0,whitespace=0,lines=1,changeline=0;
    char input;
    int atoz[26]={0};
    while((input=getchar()) != EOF)
    {
        if(input!=EOF)
        {
            bytes+=sizeof(input);
            if(changeline==1 && input=='\n')
            {
                lines++;
            }
            else if(changeline==1)
            {
                lines++;
                changeline=0;
            }
            else if(input=='\n')
            {
                changeline=1;
            }
            if(input<='Z' && input>='A')
            {
                atoz[input-'A']+=1;
                uppercase++;
            }
            else if(input<='z' && input>='a')
            {
                lowercase++;
                atoz[input-'a']+=1;
            }
            else if(input>='0' && input <='9')
            {

                digit++;
            }
            else if(isspace(input))
            {
                whitespace++;
            }
        }
    }
    printf("Bytes Count: %d\n",bytes);
    printf("Lowercase Count: %d\n",lowercase);
    printf("Uppercase Count: %d\n",uppercase);
    printf("Digit Count: %d\n",digit);
    printf("Whitespace Count: %d\n",whitespace);
    printf("Line Count: %d\n",lines);
    for(int i=0;i<26;i++)
    {
        printf("%c/%c: %d, %.3f\n",'A'+i,'a'+i,atoz[i],(atoz[i]*1.0)/(uppercase+lowercase));
    }
}
