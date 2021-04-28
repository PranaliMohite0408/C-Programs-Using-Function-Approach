#include<stdio.h>
#include<conio.h>

int Cap_Count(char cSrc[]);

int main()
{
    char cSrc[20] ={'\0'};
    int i=0,Cap_Cnt=0;

    printf("\nEnter a String:");
    gets(cSrc);

    Cap_Cnt = Cap_Count(cSrc);

    printf("\nCount of  Capital Letters in Given String is %d",Cap_Cnt);

    getch();
    return 0;

}
int Cap_Count(char cSrc[])
{
    int i =0, Cnt =0;

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='A' && cSrc[i]<='Z')
        {
           Cnt++;
        }
        i++;
    }
    return Cnt;
}
