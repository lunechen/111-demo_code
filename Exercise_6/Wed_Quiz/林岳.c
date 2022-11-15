#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define ARRAYSIZE 26

int main(void){
    int bytes = 0, lowercase = 0, uppercase= 0, digit = 0, whitespace = 0, line = 0;
    float sum_letter = 0.0;
    int letter[ARRAYSIZE] = {0};
    bool stop = false;
    char c;

    while (scanf("%c", &c) != EOF){
        bytes++;
        //First line and First char
        if (line == 0) 
            line++;
        
        //Classify the char
        while (c == '\n'){
            whitespace++;
            //scan the next c after '\n'
            if (scanf("%c", &c) == EOF){
                stop = true;//stop to output
                break;
            } else{
                bytes++;
                line++;
            }
        }
        if (stop) break; //scanf("%c", &c) == EOF
        
        if (isalpha(c)){      //c is letter
            sum_letter = sum_letter + 1;
            //c is lowercase or uppercase
            if (islower(c)){
                lowercase++;
            } else if (isupper(c)){
                uppercase++;
            }

            //classify the letter
            c = toupper(c);
            for (int i = 0; i < 26; i++){
                if (c == (char)(i + 'A')){  //change it into ASCII  
                    letter[i]++;
                    break;
                }
            }
        } else if(isdigit(c)){ //c is digit
            digit++;
        } else if(isspace(c)){ //c is whitespace
            whitespace++;
        }
    }

    // OUTPUT
    printf("Bytes Count: %d\n", bytes);
    printf("Lowercase Count: %d\n", lowercase);
    printf("Uppercase Count: %d\n", uppercase);
    printf("Digit Count: %d\n", digit);
    printf("Whitespace Count: %d\n", whitespace);
    printf("Line Count: %d\n", line);
    for (int i = 0; i < ARRAYSIZE; i++)
        printf("%c/%c: %d, %.3f\n", (char)(i + 'A'), (char)(i + 'a'), letter[i], (sum_letter)? letter[i] / sum_letter : 0);

    return 0;
}
