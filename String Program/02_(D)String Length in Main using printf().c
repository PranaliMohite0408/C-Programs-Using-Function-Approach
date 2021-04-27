#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()

{
     char cSrc[50]={'\0'};
     int Len = 0;

     puts("\nGiven String is:");
     gets(cSrc);

     Len = printf("%s",cSrc);

     system("cls");

     printf("\nLength of Given String is %d",Len);

     getch();
     return 0;

}
