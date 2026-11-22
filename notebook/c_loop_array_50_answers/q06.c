#include <stdio.h>

int main(void) {
    int n=0 ,t=0 ;
    scanf("%d", &n);
    for(int i=1; i<=n;  i++ ){
        t=i*i+t;
    } 
    printf("%d ",t);
}
