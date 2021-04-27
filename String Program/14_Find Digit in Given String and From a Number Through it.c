#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = {'\0'}, Num[20] = "";
    int i =0;
    int j=0;

    printf("\nEnter a Given String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Num[j] = cSrc[i];
            j++;
        }
        i++;
    }

    printf("\nNumber from Digit in GIven String is = %s",Num);
    getch();
    return  0;
}
