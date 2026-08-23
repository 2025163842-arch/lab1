#include <stdio.h>

int sum_array(const int *values, size_t count);

int main(void){

    int values[] = {4,7,1,9,3,6,7};
    size_t count = sizeof(values) / sizeof(values[0]);

    printf("The sum of the elements in the array is %d.\n", sum_array(values, count));


    return 0;
}

int sum_array(const int *values, size_t count){

    int sum = 0;

    printf("There are %zu elements in the array.\n", count);

    printf("The values in the array are: ");

    for(size_t i = 0; i < count; i++){

        printf("%d ", values[i]);

        if(i != count - 1){
            printf(",");
        }
        else{
            printf("\n");
        }

        sum += values[i];

    }

    return sum;
}