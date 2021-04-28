#include<stdio.h>
#include<conio.h>

int Special_Cnt(char *);

int main()
{
    char cSrc[20]={'\0'};

    int Sp_Cnt = 0;

    printf("\nEnter a String :");
    gets(cSrc);

    Sp_Cnt = Special_Cnt(cSrc);

    printf("\nCount of Special Symbol in Given String is = %d",Sp_Cnt);

    getch();

    return 0;
}

int Special_Cnt(char *cSrc)
{
    int i=0,Cnt =0;

    while(cSrc[i]!= '\0')
    {
        if(!((cSrc[i]>='A' && cSrc[i]<='Z') || (cSrc[i]>= 'a' && cSrc[i] <= 'z') || (cSrc[i]>='0' && cSrc[i] <= '9') ))
        {
            Cnt++;
        }

        i++;
    }
    return Cnt;
}
