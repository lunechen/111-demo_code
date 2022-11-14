#include<stdio.h>
#include<ctype.h>

int main(){
    char ch,ch_ex='\n';
    int abc[26],bludwl_Count[6]={0,0,0,0,0,0};
    for(int i=0; i<26;i++) abc[i]=0;
    while((ch=getchar())!=EOF){
        if(ch_ex=='\n') bludwl_Count[5]++;
        ch_ex=ch;
        bludwl_Count[0]++;
        if(ch>='a'&&ch<='z'){
            bludwl_Count[1]++;
            abc[ch-'a']++;
        }
        else if(ch>='A'&&ch<='Z'){
            bludwl_Count[2]++;
            abc[ch-'A']++;
        }
        else if(ch>='0'&&ch<='9') bludwl_Count[3]++;
        else if(isspace(ch)) bludwl_Count[4]++;
    }
    printf("Bytes Count: %d\n",bludwl_Count[0]);
    printf("Lowercase Count: %d\n",bludwl_Count[1]);
    printf("Uppercase Count: %d\n",bludwl_Count[2]);
    printf("Digit Count: %d\n",bludwl_Count[3]);
    printf("Whitespace Count: %d\n",bludwl_Count[4]);
    printf("Line Count: %d\n",bludwl_Count[5]);
    for(int i=0; i<26; i++){
        printf("%c/%c: %d, %.3f",'A'+i,'a'+i,abc[i],(float)abc[i]/(bludwl_Count[1]+bludwl_Count[2]));
        if(i!=25) printf("\n");
    }
}
