#include <stdio.h>

int main(void) {
    int n,k, cnt = 0;
    scanf("%d %d", &n, &k);

    for (int i=1; i <=n; i++){
        if(i%k==0) cnt++;
    }

    printf("%d",cnt);

    return 0;
}
