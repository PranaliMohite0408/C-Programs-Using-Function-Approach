#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] ={'\0'};
    int i=0,Cap_Cnt=0;

    printf("\nEnter a String:");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='A' && cSrc[i]<='Z')
        {
          Cap_Cnt++;
        }
        i++;
    }

    printf("\nCount of  Capital Letters in Given String is %d",Cap_Cnt);

    getch();
    return 0;

}
