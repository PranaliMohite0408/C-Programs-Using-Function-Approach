#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] ={'\0'};
    int i=0, Small_Alpha=0;

    printf("\nEnter a String:");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='a' && cSrc[i]<='z')
        {
          Small_Alpha++;
        }
        i++;
    }

    printf("\nCount of Small Alphabets Letters in Given String is %d",Small_Alpha);

    getch();
    return 0;

}

