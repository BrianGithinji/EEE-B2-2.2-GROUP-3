#include <stdio.h>

/**
 main- prints the alphabet in lowercase except e and q
*/

int main()
{
    char ch;

    for(ch='a'; ch<='z'; ch++)

        if(ch!='e' && ch!='q')
        putchar(ch);

        putchar ('\n');

        return(0);
}
