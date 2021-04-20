///Accept Array and Display All Elements with Loop///
#include<stdio.h>
#include<conio.h>
void Accept_Element(int[],int);
void Display_Element(int[],int);
int main()
{
    int Num[7]={};
    Display_Element(Num,7);
    printf("\nBack To Main()\n");
    Accept_Element(Num,7);
    Display_Element(Num,7);
    getch();
    return 0;
}
Accept_Element(int Arr[],int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("\nEnter Value for Element Number %d=",i);
        scanf("%d",&Arr[i]);
    }

    return;
}
Display_Element(int fun[],int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("\nValue of Element %d=%d",i+1,fun[i]);
    }
    return;
}
