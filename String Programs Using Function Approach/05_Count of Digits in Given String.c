#include<stdio.h>
#include<conio.h>

int Dig_Count(char[]);

int main()
{
    char cSrc[20] ={'\0'};
    int i=0,Dig_Cnt=0;

    printf("\nEnter a String:");
    gets(cSrc);

    Dig_Cnt = Dig_Count(cSrc);

    printf("\nCount of Digits in Given String is %d",Dig_Cnt);

    getch();
    return 0;

}
int Dig_Count(char cSrc[])
{
    int i =0,Cnt =0;

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='0' && cSrc[i]<='9')
        {
            Cnt++;
        }
        i++;
    }

    return Cnt;
}

