#include<stdio.h>
#include<conio.h>
void Karad();
int main()
{
    const int Num = 100;
    int P = Num - 50;

    printf("\nValue of Num = %d",Num);
    printf("\nvalue of P = %d",P);

    Karad();

    getch();
    return ;
}
void Karad()
{
    const int No = 50;

    printf("\n Value of Const No is = %d",No);

    return ;
}
