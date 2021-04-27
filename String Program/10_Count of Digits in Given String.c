#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] ={'\0'};
    int i=0,Dig_Cnt=0;

    printf("\nEnter a String:");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='0' && cSrc[i]<='9')
        {
          Dig_Cnt++;
        }
        i++;
    }

    printf("\nCount of Digits in Given String is %d",Dig_Cnt);

    getch();
    return 0;

}

