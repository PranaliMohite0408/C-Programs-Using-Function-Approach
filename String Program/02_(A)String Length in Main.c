#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[50]={'\0'};
    int i=0;

    puts("\nEnter a String");
    gets(cSrc);

    for(i=0;i<=50;i++)
    {
        if(cSrc[i]=='\0')
        {
            break;
        }
    }

    printf("\nLength of Given String is =  %d",i);

    getch();
    return 0;
}
