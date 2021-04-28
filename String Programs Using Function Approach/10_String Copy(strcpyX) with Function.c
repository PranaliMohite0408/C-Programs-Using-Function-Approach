#include<stdio.h>
#include<conio.h>

void StrcpyX(char inStr[], char outStr[])
{
    int i=0;

    while(inStr[i] != '\0')
    {
        outStr[i] = inStr[i];
        i++;
    }
    outStr[i] = '\0';
    return ;
}
int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20];

    printf("\nEnter a Sting :");
    scanf("%[^\n]",cSrc);

    StrcpyX(cSrc,cDest);

    printf("\nGiven String is : %s",cSrc);
    printf("\nCopied String is : %s",cDest);

    getch();
    return 0;
}
