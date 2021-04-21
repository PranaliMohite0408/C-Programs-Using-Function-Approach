#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21,*iptr1 = &iNo, *iptr2 = &iNo;

    printf("\nValue of iNo using its pointer iptr1 = %d",*iptr1);
    printf("\nAddress of iNo using iptr1 = %d",iptr1);
    printf("\nAddress of iptr1 = %d",&iptr1);
    printf("\nValue of variable using its Pointer iptr2 = %d",*iptr2);
    printf("\nAddress of Variable using iptr2 = %d",iptr2);
    printf("\nAddress of iptr2  = %d",&iptr2);

    getch();

    iNo = 55;

    printf("\n\n===========*****=============");

    printf("\nNew Value of iNo using its Pointer iptr1 = %d",*iptr1);
    printf("\nNew value of variable using Pointer iptr2 = %d",*iptr2);

    printf("\n\n===========*****=============");

    getch();

    *iptr1 = 101;
    printf("\nNew Value of iNo =%d",iNo);
    printf("\nValue of iNo using its Pointer iptr1 = %d",*iptr1);
    printf("\nValue of variable using its Pointer iptr2 = %d",*iptr2);
    printf("\n===========*****=============");
    getch();
    return 0;
}
