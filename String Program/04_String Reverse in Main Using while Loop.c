#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    char cDest[20];
    int i=0, j=0;

    printf("\nEnter a String:");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }

    i=i-1;

    while(i>=0)
    {
        cDest[j]=cSrc[i];
        j++;
        i--;
    }
    cDest[j]= '\0';

    printf("\nGiven String is %s",cSrc);
    printf("\nReverse String is %s",cDest);

    getch();
    return 0;

}
