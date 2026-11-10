#include <stdio.h>
#include <math.h>

int main(void) {
    /* TODO: 讀入、運算、輸出。請刪除本註解並完成程式。 */
    int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);

    int d = b*b - 4*a*c;

    if (d < 0) {
        printf("No real root\n");
    } else if (d == 0) {
        printf("Two same roots x=%d\n", -b/(2*a));
    } else {
        
        int s = (int) (sqrt((double)d) + 0.5); 

        int x1 = (-b + s) / (2*a);
        int x2 = (-b - s) / (2*a);
        printf("Two different roots x1=%d , x2=%d\n", x1, x2);
    }
    return 0;
}
