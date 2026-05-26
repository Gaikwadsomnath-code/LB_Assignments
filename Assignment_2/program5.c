//5.Accepts number from user and check whether number is even or odd
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet==TRUE)
    {
        printf("Number is Even %d",iValue);
    }
    else
    {
        printf("Number is Odd %d",iValue);
    }

    return 0;
}