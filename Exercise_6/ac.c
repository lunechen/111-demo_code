#include <stdio.h>
#include <ctype.h>

int main(){
    int byteCnt = 0;
    int lowerCnt = 0, upperCnt = 0;
    int digitCnt = 0;
    int spaceCnt = 0;
    int lineCnt = 0;
    int alphabet[26] = {0};
    int flag = 0;   // 0 = new-line;
    char c; // input character

    while((c = getchar()) != EOF){
        byteCnt++;
        if (flag == 0){
            lineCnt++;
            flag = 1;
        }
        if (isdigit(c)){
            digitCnt++;
        }
        else if (isalpha(c)){
            if (isupper(c)){
                upperCnt++;
                alphabet[c - 'A']++;
            }
            else{
                lowerCnt++;
                alphabet[c - 'a']++;
            }
        }
        else if (isspace(c)){
            spaceCnt++;
            if (c == '\n') flag = 0;
        }
    }

    printf("Bytes Count: %d\n", byteCnt);
    printf("Lowercase Count: %d\n", lowerCnt);
    printf("Uppercase Count: %d\n", upperCnt);
    printf("Digit Count: %d\n", digitCnt);
    printf("Whitespace Count: %d\n", spaceCnt);
    printf("Line Count: %d\n", lineCnt);
    for(int i = 0; i < 26; ++i){
        printf("%c/%c: %d, %.3lf\n", 'A' + i, 'a' + i, alphabet[i], alphabet[i] * 1.0f / (lowerCnt + upperCnt));
    }

    return 0;
}