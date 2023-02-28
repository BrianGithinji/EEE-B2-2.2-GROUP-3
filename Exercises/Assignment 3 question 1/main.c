#include <stdio.h>
/*

Sum of ten marks
*/
int main()
 {
    float avg,sum;
    int i;
    float mark;
    int marks[10];/*array declaration*/
        for(i=0;i<=9;i++)
        {

            printf("\n Enter mark %d :" ,i+1);
            scanf("%d",&marks[i]);      /*Store data in the array*/
            sum = sum+marks[i];         /*read data from the array*/
        }
        avg =sum/10;
        for (i=0;i<=9;i++)
            printf("   %d ",marks[i]);
        printf("\n The  Average mark is %.2f",avg);
        return 0;
}
