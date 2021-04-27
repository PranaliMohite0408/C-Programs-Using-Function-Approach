#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[50]={'\0'};
    int Len = 0;

    printf("\nEnter a String :");
    gets(cSrc);

    for(Len =0;cSrc[Len] !='\0';Len++);

    printf("\nLength of Given String is %d",Len);
    getch();
    return 0;
}
