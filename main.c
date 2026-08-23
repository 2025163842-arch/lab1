#include <stdio.h>
#include <stdlib.h>
#include "stats.h"
#include "record.h"
#include "node.h"

/*int main(void){

    //int values[] = {4,7,1,9,3,6,7};
    //size_t count = sizeof(values) / sizeof(values[0]);

    //printf("The sum of the elements in the array is %d.\n", sum_array(values, count));

    Record record1 = {1, 4.20};

    printf("Record ID: %d \n", record1.id);

    Record *record_ptr = &record1;

    printf("Record ID: %d \n", record_ptr->id);

    record_ptr->value = 5.50;

    printf("Record Value: %f \n", record1.value);

    return 0;
}*/


/*int main(void){

    Record *record = malloc(sizeof *record);
 
    if (record == nullptr) {
        fputs("memory allocation failed\n", stderr);
        return EXIT_FAILURE;
    }
 
    record->id = 1;
    record->value = 42.5;
 
    printf("id=%d value=%.1f\n", record->id, record->value);
 
    free(record);
 
    return EXIT_SUCCESS;

}*/

int main(void){

    Node *node = malloc(sizeof *node);

    if (node == nullptr) {
        fputs("memory allocation failed\n", stderr);
        return EXIT_FAILURE;
    }

    node->value = 100;
    node->next = nullptr;

    printf("Value: %d\n", node->value);

    free(node);

    return EXIT_SUCCESS;
}