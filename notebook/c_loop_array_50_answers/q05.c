#include <stdio.h>

int main(void) {
    int n=0;
    if(scanf("%d", &n )!=1){
        return 1;
    }
    for(int i=1; i<=9;  i++ ){
        printf("%d ",n*i);
    } 

    return 0;
}
