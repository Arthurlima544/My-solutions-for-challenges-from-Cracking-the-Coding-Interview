#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int size;
    printf("give the size of array\n");

    scanf("%d", &size);

    printf("Now insert all %d elements\n", size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i] );
    }

    // Todo: Sort array
    int aux;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i] );
    }
    printf("\n");

    for (int i = 1; i < size; i++)
    {
        if(array[i-1] > array[i]){
            aux = array[i-1];
            array[i-1]  = array[i];
            array[i] = aux;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i] );
    }
    printf("\n");
    

    // Todo: do a Binary Search


    for (int i = 0; i < size; i++)
    {
        
    }
    
    
    return 0;
}
