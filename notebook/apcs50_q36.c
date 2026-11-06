#include <stdio.h>

int main(void) {
    char ch;
    if (scanf("%c", &ch) != 1) return 0;
    printf("%d\n", ch - 'A' + 1);

    return 0;
}
