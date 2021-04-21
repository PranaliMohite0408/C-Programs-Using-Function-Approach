#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = {10,20,30,40,50};
    int *ptr = Num;

    printf("\nBase Address of Array is %d",Num);
    printf("\nValue in Pointers is = %d",ptr);
    printf("\n Value of Array Element where Pointer Pointing = %d",*ptr);
    getch();
    ptr++;

   /// prt++ = ptr + (sizeof(DataType of ptr)*1);

    printf("\n\nNew Value in Pointer is = %d",ptr);
    printf("\n\nValue of Array Element where Pointer Pointing = %d",*ptr);

    getch();
    return 0;
}
