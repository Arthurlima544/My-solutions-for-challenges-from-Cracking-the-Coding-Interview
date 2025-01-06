#include <stdio.h>
#include <stdlib.h>

/* 
    The idea of divide and conquer algorithms:

    Separate the problem into different pierces and solves each one recursivily.

    Join parts into a unique solution

    Often we break into 2 pierces... As on QuickSort.

*/

void swap( int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size){
    printf("[");
    for(int i = 0; i < size; i++ ){
        if(i == size - 1){
            printf("%d ", array[i]);
            continue;
        }
        printf("%d, ", array[i]);
    }
    printf("]");
    printf("\n");
}

int partition(int array[], int first_element_index, int last_element_index){
    int pivot = array[last_element_index]; // last element in array as pivot
    int pivot_correct_position = first_element_index - 1; 

    for(int j = first_element_index;  j < last_element_index; j++){
        if(array[j] < pivot){
            pivot_correct_position++;
            swap(&array[pivot_correct_position], &array[j]);
        }
    }
    swap(&array[pivot_correct_position+1], &array[last_element_index]);
    return (pivot_correct_position + 1);
} 


void quickSort(int array[], int first_element_index, int last_element_index){
    if(first_element_index < last_element_index){
        int pivot_index = partition(array, first_element_index, last_element_index);
        quickSort(array, first_element_index, pivot_index - 1);
        quickSort(array, pivot_index + 1, last_element_index);
    }   

}


int main(int argc, char* argv[]){

    int array[] = {1,5,2,3,4,6,7}; // 4 Bytes each

    // Size in bytes of array / size of one element in array. 
    int n = sizeof(array) / sizeof(array[0]);

    printf("Array UnSorted: ");
    printArray(array, n);
    
    quickSort(array, 0 , n - 1);

    printf("Array Sorted: ");

    printArray(array, n);

    return 0;
}