/*

2. Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new
line.
• You can only use the putchar function (every other function (printf, puts, etc…) is
forbidden)
• All your code should be in the main function
• You can only use putchar three times in your code

The code below answers the question above         
Author: Wachira Edwin
*/
#include<stdio.h>//include already developed programs
int main(){//declaration of a function
    char  c;//character  c to be defined/declaring
    char C;
    for(c='a';c<='z';c++){//assigning  //condition for c while for loop is running //incrementation of the variable c 
    //Code under {} runs in the loop 
        putchar(c); //calling the function putchar while assigning it to parameter c
    }
    for (C='A';C<='Z';C++){
        putchar(C);
    
    
    
    }

    putchar('\n'); //adding a new line 
    return 0;//returning the interger zero
}