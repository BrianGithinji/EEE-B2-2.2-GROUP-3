/*To write a lowercase character and show its uppercase equivalent*/

#include<stdio.h>
int main()
{
    char lowercase,uppercase;

    printf("enter a lowecase character: ");
    scanf("%c",&lowercase);

    //convert lowercase to uppercase by subtracting 32 from its ASCII code
    uppercase=lowercase-32;

    printf("The uppercase equivalent of %c is %c\n",lowercase,uppercase);

    return 0

}
