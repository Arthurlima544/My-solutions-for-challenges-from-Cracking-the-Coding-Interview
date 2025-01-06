#include <stdio.h>
//TODO: make the iterative binary search

int binary_search_recursive(int array[], int start, int end, int search_value) {
    if (start > end) {
        return -1;
    }
    // main logic of binary search
    int middle_index = start + (end - start) / 2;

    if (array[middle_index] == search_value) {
        return middle_index; 
    }

    printf("The middle index is %d, start: %d, end: %d\n", middle_index, start, end);

    if (array[middle_index] < search_value) {
        return binary_search_recursive(array, middle_index + 1, end, search_value);
    } else {
        return binary_search_recursive(array, start, middle_index - 1, search_value);
    }
}

int main(int argc, char *argv[]){

    int sorted_array[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };

    int search_value;

    int size = sizeof(sorted_array) / sizeof(int);

    scanf("%d", &search_value);

    int index_of_search_value_in_array = -1;

    index_of_search_value_in_array = binary_search_recursive(sorted_array, 0, size - 1, search_value);
    if(index_of_search_value_in_array == -1){
        printf("Element Not Found in array \n");
    }else{
        printf("The searched value: %d is on index: %d\n", search_value, index_of_search_value_in_array);
    }
    
}