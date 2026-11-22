#include <stdio.h>

int main(void) {
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i=2; i <n; i++){
        printf("%d", i);
        if(n%i==0) cnt++; break;
    }

    if (cnt > 0 ) printf("NOT PRIME");
    else printf("PRIME");

    return 0;
}
