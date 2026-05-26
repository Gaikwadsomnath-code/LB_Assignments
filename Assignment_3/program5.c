//5.Accept one charater from user and check whether thet charater is vowel(a,e,i,o,u) or not.
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char ch)
{
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')||
        (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} 

int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("enter charater:");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("Charater is vowel:%c:");
    }
    else
    {
        printf("Charater is not vowel:%c");
    }

    return 0;
}