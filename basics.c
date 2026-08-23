#include <stdio.h>

int square(int value);
bool is_even(int value);

int main(void){

    for(int i = 1; i <= 10; i++){

        printf("%d - ",i);

            if(is_even(i)){
                printf("Even - ");
            }
            else{
                printf("Odd - ");   
            }
        
        printf("Square of %d is %d\n", i, square(i));
    }
    return 0;
}

int square(int value){
    return value * value;
}

bool is_even(int value){
    return value % 2 == 0;
}