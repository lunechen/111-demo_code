#include<stdio.h>
#include<ctype.h>

int main(){

    char c ;
    int flag = 0 ;
    int byte_count=0 ,low_count = 0 ,up_count = 0 ,digit_count = 0 ,white_count = 0 ,line_count = 1 ,letter[26] = {0};

    while(scanf("%c",&c) != EOF){
        byte_count++ ;
        if(flag == 1) {
            line_count++ ;
            flag = 0 ;
        }

        if(islower(c)){
            low_count++ ;
            letter[c - 'a']++ ;
        }
        
        if(isupper(c)){
            up_count++ ;
            letter[c - 'A']++ ;
        }
        if(isdigit(c)) digit_count++ ;
        if(isspace(c)) white_count++ ;

        if(c == '\n'){
            flag = 1 ;
        }
        
    }


    int ul_tot = up_count + low_count ;

    printf("Bytes Count: %d\n",byte_count) ;
    printf("Lowercase Count: %d\n",low_count);
    printf("Uppercase Count: %d\n",up_count);
    printf("Digit Count: %d\n",digit_count) ;
    printf("Whitespace Count: %d\n",white_count);
    printf("Line Count: %d\n",line_count);
   
    for(int i=0 ;i<26 ;i++){
        printf("%c/%c: %d, %.3f\n",65+i ,97+i ,letter[i],(float)letter[i]/ul_tot) ;
    }

    return 0 ;
}
