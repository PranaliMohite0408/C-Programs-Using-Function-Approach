#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] ={'\0'};
    int i=0,W_Cnt=0;

    printf("\nEnter a String:");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]==32)
        {
          W_Cnt++;
        }
        i++;
    }

    printf("\nCount of White Spaces in Given String is %d",W_Cnt);

    getch();
    return 0;

}
