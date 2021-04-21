#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[5] = {15,59,88,27,65};
    int *ptr = &Num[4];

    printf("\nBase Address of Array is %d",Num);
    printf("\nValue in Pointers is = %d",ptr);
    printf("\n Value of Array Element where Pointer Pointing = %d",*ptr);
    getch();
    ptr = ptr-2;

   /// prt++ = ptr - (sizeof(DataType of ptr)*2);

    printf("\n\nNew Value in Pointer is = %d",ptr);
    printf("\n\nValue of Array Element where Pointer Pointing = %d",*ptr);

    getch();
    return 0;
}

