/*2. Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new
line.
• You can only use the putchar function (every other function (printf, puts, etc…) is
forbidden)
• All your code should be in the main function
• You can only use putchar three times in your code
The code below answers the question above
Author;Wachira Edwin
*/


#include <stdio.h> //include the already developed programs/extra functionality to the program
int main(){//declaring function that returns type int

    char c; //declaring variables of type  char
    char C;
    for(c='a';c<='z';c++){//for loop that increments value of c to 'z' 
        putchar(c);

    }
    for(C='A';C<='Z';C++){
        putchar(C);

    }
    putchar('\n');//adding newline
    return 0;
}