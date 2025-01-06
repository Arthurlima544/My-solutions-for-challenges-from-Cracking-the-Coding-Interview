#include <stdio.h>

void swap(int *p1, int *p2){
    int temp = *p1; 
    *p1 = *p2;
    *p2 = temp;
}

// Search for the middle of an array 
int partition(int array[], int first_index, int last_index){
    int i, pivot;
    i = first_index - 1;
    pivot = array[last_index];

    for(int j = first_index; j < last_index; j++ ){
        if(array[j] < pivot){
            i++;
            swap(&array[j], &array[i]);
        }
    }
    swap(&array[i + 1], &array[last_index]);

    return (i + 1);
}

void quicksort(int array[], int first_index, int last_index){
    int pivot_index;
    if(first_index < last_index){
        pivot_index = partition(array, first_index , last_index);

        quicksort(array, first_index, pivot_index - 1);
        quicksort(array, pivot_index + 1, last_index);
    }
}

void printfArray(int array[], int size){
    printf("[");
    for(int i = 0; i < size; i++ ){
        if( i == size - 1){
             printf("%d", array[i]);
        }else{
            printf("%d, ", array[i]);
        }
    }
    printf("]\n");
}

int main(int argc, char* argv[]){

    int array[] = {12,3,9,7,1,10,5};
    int size;

    size = sizeof(array) / sizeof(int);

    quicksort(array, 0, size - 1);
    
    printfArray(array, size);
    
    return 0;
}