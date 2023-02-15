
#include <stdio.h>

int main() {
    int i;
    char c;

    for (i = 0; i < 16; i++) {
        if (i < 10) {
            c = '0' + i;
        } else {
            c = 'a' + (i - 10);
        }
        putchar(c);
    }

    putchar('\n');

    return 0;
}
