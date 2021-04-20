///Array with NUll initialization and Display by function//
#include<stdio.h>
#include<conio.h>
void Display_Array(int Arr[],int size);
int main()
{
    int Num[7]={};
    Display_Array(Num,7);
    getch();
    return ;
}
void Display_Array(int Arr[],int size)
{
    int i=0;
    printf("\nDisplay Array Element");
    for(i=0;i<size;i++)
    {
        printf("\nValue of Element %d=%d",i+1,Arr[i]);
    }
    getch();
    return;
}
