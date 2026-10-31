#include <stdio.h>

int main(void) {
    /* 請在此完成第 1 題程式 */
    long long a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) !=3) return 0;
    long long old_a = a;
    
    a = b;
    b = c;
    c = old_a;
    
    printf("%d %d %d \n", a, b,c);
    return 0;
}
