#include<stdio.h>
#include<conio.h>

int Convert_To_Toggle_Case(char *);

int main()
{
    char cSrc[20] = {'\0'};

    printf("\nEnter a String :");
    gets(cSrc);

    Convert_To_Toggle_Case(cSrc);

    printf("\nGiven String is After Toggle = %s",cSrc);

    getch();
    return 0;
}
int Convert_To_Toggle_Case(char *cSrc)
{
     int i=0;

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
    return i;
}
