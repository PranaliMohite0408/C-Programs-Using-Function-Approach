#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = {'\0'};
    int i = 0;

    printf("\nEnter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <='Z')
        {
            cSrc[i] = cSrc[i] + 32;
        }
        else if(cSrc[i] >= 'a' && cSrc[i] <='z')
        {
            cSrc[i] = cSrc[i] - 32;
        }

        i++;
    }

    printf("\nGiven String is After Toggle = %s",cSrc);

    getch();
    return 0;
}

