#include <stdio.h>
#include <string.h>
#include <ctype.h>

int byte = 0, low = 0, upp = 0, dgt = 0, space = 0, line = 0;
int letter[26];

void Initialize();
void Decision(char ch);
void PrintAns();

int main()
{
    char ch;
    char pre;
    Initialize();
    while ((ch = getchar()) != EOF)
    {
        Decision(ch);
        pre = ch;
    }
    if (pre != '\n')
        line++;
    PrintAns();
    return 0;
}

void Initialize()
{
    for (int i = 0; i < 26; i++)
        letter[i] = 0;
}

void Decision(char ch)
{
    byte++;
    if (ch == '\n')
        line++;
    if (islower(ch))
    {
        low++;
        letter[ch - 'a']++;
    }
    else if (isupper(ch))
    {
        upp++;
        letter[ch - 'A']++;
    }
    else if (isdigit(ch))
        dgt++;
    else if (isspace(ch))
        space++;
}

void PrintAns()
{
    printf("Bytes Count: %d\n", byte);
    printf("Lowercase Count: %d\n", low);
    printf("Uppercase Count: %d\n", upp);
    printf("Digit Count: %d\n", dgt);
    printf("Whitespace Count: %d\n", space);
    printf("Line Count: %d\n", line);
    for (int i = 0; i < 26; i++)
    {
        printf("%c/%c: %d, %.3f\n", i + 'A', i + 'a', letter[i], (letter[i] == 0 ? 0 : (double)letter[i] / (low + upp)));
    }
}
