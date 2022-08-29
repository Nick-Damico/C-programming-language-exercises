#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Print Data type ranges.\n");
    printf("Char: %12d\n", CHAR_BIT);
    printf("Unsigned Char: %3d\n", UCHAR_MAX);
    printf("Char Min: %8d\n", SCHAR_MIN);
    printf("Char Max: %8d\n", SCHAR_MAX);
    printf("Unsigned Char: %3d\n", SCHAR_MAX);
    return 0;
}