#include<stdio.h>
#include<conio.h>

void Swap_Two_Numbers(int *,int *);

int main()
{
    int Num1 =0, Num2 = 0;

    printf("\nEnter Two Numbers :");
    scanf("%d%d",&Num1,&Num2);

    printf("\nBefore swap of first Number = %d",Num1);
    printf("\nBefore swap of second Number = %d",Num2);

    Swap_Two_Numbers(&Num1,&Num2);

    printf("\n======================================");

    printf("\n\nAfter swap of first Number = %d",Num1);
    printf("\nAfter swap of second Number = %d",Num2);

    printf("\n\nThanks....");
    getch();
    return 0;
}
void Swap_Two_Numbers(int *ip1,int *ip2)
{
    int Temp =0;
    Temp = *ip1;
    *ip1 = *ip2;
    *ip2 = Temp;
    return;
}
