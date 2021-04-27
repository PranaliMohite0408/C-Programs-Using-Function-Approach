#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20]={'\0'};
    char cDest[20];
    int i=0,j=0;

    printf("\nEnter a String:");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }

    i=i-1;

    while(i>=0)
    {
        cDest[j]=cSrc[i];
        i--;
        j++;
    }

    cDest[j]='\0';
    printf("\nGiven String is %s",cSrc);
    printf("\nReverse of String is = %s",cDest);


    for(i=0;cSrc[i]!=0;i++)
    {
        if(cSrc[i] != cDest[i])
        {
            break;
        }
    }

     if(i==j)
     {
         printf("\nGiven String is Palindrome !!!!");
     }
     else
     {
         printf("\nGiven String is Not Palindrome !!!!");
     }

     getch();
     return 0;

}
