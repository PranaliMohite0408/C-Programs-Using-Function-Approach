#include<stdio.h>
#include<conio.h>

int Str_Lenx(char []);

int main()
{
    char cSrc[20] = {'\0'};
    int Len =0;

    printf("\nEnter a String :");
    gets(cSrc);

    Len = Str_Lenx(cSrc);

    printf("\nLength of Given String is  = %d",Len);

    getch();
    return 0;
}

int Str_Lenx(char inStr[])
{
    int i =0;

    while(inStr[i] != '\0')
    {
        i++;
    }
    return i;
}
