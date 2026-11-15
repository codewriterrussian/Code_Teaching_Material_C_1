
#include <stdio.h>

int main(void) {
    int answer = 4;
    int guess;
    int count = 0;

    printf("Please enter your guess (0-100): ");
    scanf("%d", &guess);
    count = count + 1;

    while (guess != answer){
        if (guess > answer) printf("Too large\n");
        else printf("Too small\n");

        printf("Please enter your guess (0-100): ");
        scanf("%d", &guess);

        count++;
            
    }


    printf("Correct! (%d)\n", count);

    return 0;
}
