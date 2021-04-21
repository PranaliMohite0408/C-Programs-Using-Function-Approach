#include<stdio.h>
#include<conio.h>

void Swap_Two_Numbers(int,int);

int main()
{
    int Num1 = 0, Num2 = 0;

    printf("\nEnter Two Numbers for Swapping :");
    scanf("%d%d",&Num1,&Num2);

    printf("\nBefore swap of first Number = %d",Num1);
    printf("\n\nBefore swap of second Number = %d",Num2);

    Swap_Two_Numbers(Num1,Num2);

    printf("\n=======================================\n");

    printf("\n\nAfter swap value in first Number = %d",Num1);
    printf("\n\nAfter swap value in second Number = %d",Num2);
    printf("\n\nThanks....");
    getch();
    return 0;
}
void Swap_Two_Numbers(int N1,int N2)
{
    int Temp = 0;
    Temp = N1;
    N1 = N2;
    N2 = Temp;
    return ;

}
