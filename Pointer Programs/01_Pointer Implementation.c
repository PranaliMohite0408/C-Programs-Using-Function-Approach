#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo=21,iNum=55;
    int *iptr1 = &iNo;
    int *iptr2 = &iNo;

    printf("\nValue of iNo = %d",iNo);
    printf("\nAddress of iNo = %d",&iNo);
    printf("\nValue of iNo using its Pointer iptr1 = %d",*iptr1);
    printf("\nAddress of iNo using iptr1 = %d",iptr1);
    printf("\nAddress of iptr = %d",&iptr1);

    printf("\n\nValue of iNum = %d",iNum);
    printf("\nAddress of iNum = %d",&iNum);
    printf("\nValue of Variable using its Pointer iptr2 = %d",*iptr2);
    printf("\nAddress of iptr2 = %d",&iptr2);

    getch();
    return 0;

}
