#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5
void Accept_Element(int[]);
void Display_Element(int[]);
int search_Element(int[],int);

int main()
{
    int Arr[Size]={},Src_Ele=0;
    Accept_Element(Arr);
    system("cls");
    Display_Element(Arr);
    search_Element(Arr,Src_Ele);
    return 0;
}
void Accept_Element(int Arr[])
{
    int i=0;
    for(i=0;i<Size;i++)
    {
        printf("\nEnter Element %d => ",i+101);
        scanf("%d",&Arr[i]);
    }
    return;
}
void Display_Element(int Arr[])
{
    int i=0;
    for(i=0;i<Size;i++)
    {
        printf("\nValue of Element %d=%d",i+101,Arr[i]);
    }
    return;
}
int search_Element(int Arr[],int Src_Ele)
{
    int i=0;
    printf("\nEnter Element to Search in Array");
    scanf("%d",&Src_Ele);

    for(i=0;i<Size;i++)
    {
        if(Arr[i] == Src_Ele)
        {
            break;
        }
    }

    if(i<Size)
        {
            printf("\n The Search Element %d is found in %d Index!!",Src_Ele,i);
        }
        else
        {
            printf("\nThe Search Element %d is not found in given Array",Src_Ele);
        }
    return Src_Ele;
}

