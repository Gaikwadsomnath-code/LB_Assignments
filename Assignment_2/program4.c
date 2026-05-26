// 4.Accept two number from user and display first number in second number of times.
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    // write updator
    
    for(iCnt=1;iCnt <= iFrequency;iCnt++)
    {
        printf("%d",iNo);
    }
}



int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    printf("Enter number:");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}


