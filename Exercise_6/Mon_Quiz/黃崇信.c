#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
int byte=0 , lowercase=0 , uppercase=0 , digit=0 , whitespace=0 , line = 0 , k=1;
int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    while(ch=getchar()){
         if(k==1){
            if(ch==EOF)
                break;
            else{
                line++;
                k=0;
            }
        }
        else if(ch==EOF)
            break;
            
        byte++;
        if(isupper(ch)){
            uppercase++;
            a[(ch-65)]++;
        }
        else if(islower(ch)){
            lowercase++;
            a[(ch-97)]++;
        }
        else if(isdigit(ch))
            digit++;
        
        else if(isspace(ch)){
            whitespace++;
            if(ch=='\n')
                k=1;
        }        
    }

    printf("Bytes Count: %d\n",byte);
    printf("Lowercase Count: %d\n",lowercase);
    printf("Uppercase Count: %d\n",uppercase);
    printf("Digit Count: %d\n",digit);
    printf("Whitespace Count: %d\n",whitespace);
    printf("Line Count: %d\n",line);

    for (int i=0;i<26;i++){
            printf("%c/%c: %d, %.3f\n",(char)i+65,(char)i+97,a[i],(float)a[i]/(lowercase+uppercase));
    }
}
