///Search An Element in Array and Display Index of Element in Array if Found///

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
void Accept_Element(int[]);
void Display_Element(int[]);
int search_Element(int[],int);
int main()
{
    int Num[size]={},Src_Ele=0,Index=-1;
    Accept_Element(Num);
    system("cls");
    Display_Element(Num);

    getch();
    printf("\nEnter Element To Be Searched in Array =>");
    scanf("%d",&Src_Ele);
    Index=search_Element(Num,Src_Ele);

    if(-1==Index)
    {
        printf("\nNumber %d is not Present in Given Array!!!",Src_Ele);
    }
    else
    {
        printf("\nNumber %d Found at Index %d in Given Array",Src_Ele,Index);
    }
    getch();
    return 0;
}
int search_Element(int Arr[],int Ele)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        if(Ele==Arr[i])
        {
            break;
        }
    }
    if(size==1)
    {
        i=-1;
    }
    return i;
}
void Accept_Element(int Arr[])
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("\nEnter Value for Element Number %d=>",i+101);
        scanf("%d",&Arr[i]);
    }
    return;
}
void Display_Element(int fun[])
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("\nValue of Element %d=%d",i+1,fun[i]);
    }
    return;
}
