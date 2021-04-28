#include<stdio.h>
#include<conio.h>

int Convert_To_Lower(char *);

int main()
{
    char cSrc[20] = {'\0'};
    int inStr =0;

    printf("\nEnter a String :");
    gets(cSrc);

    inStr = Convert_To_Lower(cSrc);

    printf("\nGiven String is After Lower Case : = %s",cSrc);

    getch();
    return 0;
}
int Convert_To_Lower(char *cSrc)
{
    int i=0;

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <='Z')
        {
            cSrc[i] = cSrc[i] + 32;
        }
        i++;
    }

    return i;

}
