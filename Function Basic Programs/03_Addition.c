///Accept Something Returns Nothing///

#include<stdio.h>
#include<conio.h>

void Add(int,int);

int main()
{
    int No1=0,No2=0;
    printf("\nEnter Two Numbers for Addition=>");
    scanf("%d%d",&No1,&No2);
    Add(No1,No2);

    getch();
}
void Add(int N1,int N2)
{
    int sum=0;
    sum = N1+N2;
    printf("\nAddition is %d",sum);
    return ;
}
