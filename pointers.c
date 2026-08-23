#include <stdio.h>

int main(void){

    int score = 10;
    int *score_ptr = &score;

    printf("Score: %d\n", score);
    printf("Address in score_ptr: %p\n", (void *)score_ptr);
    printf("Value reached through score_ptr: %d\n", *score_ptr);

    *score_ptr = 25;

    printf("New score: %d\n", score);

    return 0;
}