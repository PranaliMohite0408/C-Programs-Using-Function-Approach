#include<stdio.h>
#include<conio.h>
int Vowel_Count(char[]);

int main()
{
    char cSrc[20] = {'\0'};
    int  V_Cnt =0;

    printf("\nEnter a String: ");
    gets(cSrc);

    V_Cnt = Vowel_Count(cSrc);

    printf("\nCount of Vowels in Given String is %d",V_Cnt);

    getch();
    return 0;
}
int Vowel_Count(char cSrc[])
{
     int i =0;
     int Cnt =0;
     while(cSrc[i]!='\0')
     {
        if(cSrc[i]=='a' || cSrc[i]=='e' || cSrc[i]=='i' || cSrc[i]=='o' || cSrc[i]=='u' || cSrc[i]=='A' ||cSrc[i]=='E' || cSrc[i]=='I' || cSrc[i]=='O'|| cSrc[i]=='U')
        {
            Cnt++;
        }

        i++;
     }
    return Cnt;
}
