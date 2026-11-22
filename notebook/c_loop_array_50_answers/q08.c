#include <stdio.h>

int main(void) {
    int a,d, n;
    scanf("%d %d %d", &a, &d, &n);

    for (int i=0; i <n; i++){
        printf("%d ", a + i*d);
    }

    return 0;
}
