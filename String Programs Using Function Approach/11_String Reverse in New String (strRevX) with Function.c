#include<stdio.h>
#include<conio.h>

void StrRevX(char inStr[],char outStr[])
{
    int i=0,j=0;

    while(inStr[i] != '\0')
    {
        i++;
    }

    i--;

    while(i>=0)
    {
        outStr[j] = inStr[i];

        j++;
        i--;
    }

    return ;
}
int main()
{
    char cSrc[20] = {'\0'},cDest[20] = {'\0'};

    printf("\n\nEnter a String :");
    scanf("%[^\n]",cSrc);

    StrRevX(cSrc,cDest);

    printf("\nGiven String is :%s",cSrc);
    printf("\nReverse String is : %s",cDest);

    getch();

    return 0;
}
