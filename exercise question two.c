/*To write a program that reads a,b,and c in a quadratic equation,determine the roots and display a,b,c and the roots*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    float d,root1,root2;

    printf("enter a,b,and c of quadratic equation: ");
    scanf('"%f%f%f", &a &b &c');

    d=b*b-4*a*c;

    if(d<0)
    {
        printf("roots of complex number.\n");
        printf("roots of quadratic equation are: ");
        printf("%f%f",-b/(2*a),-sqrt(-d)/(2*a));

        return 0;

    }
    else if(d==0)
    {
        printf("both roots are equal.\n");
        root1=-b/(2*a);
        printf("root of quadratic equation is: %f",root1);

        return 0;
    }
    else
    {
        printf("roots are real numbers.\n");

        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("roots of quadratic equation are: %f,%f",root1,root2);

        return 0;
    }

    return 0;
}
