#include<stdio.h>
#include<conio.h>
void Karad();
int gNum = 505;

int main()
{
    const int Num = 100;
    int P = Num - 50;

    printf("\nValue of Num = %d",Num);
    printf("\nvalue of P = %d",P);

    printf("\nValue of Global Variable gNum inside main()= %d",gNum);

    gNum = gNum+20;

    Karad();

    getch();
    return ;
}
void Karad()
{
    const int No = 1001;

    printf("\n Value of Const No is = %d",No);
    printf("\nValue of Global variable gNum inside Karad()= %d",gNum);

    return ;
}

