#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
        int array[] = {1,2,4,6,7,8};
        int size = sizeof(array) / sizeof(array[0]);

        for(int i = 0; i< size / 2; i++){
                int other = size -  1 - i;
                int temp = array[i];
                array[i] = array[other];
                array[other] = temp;
        }
        
        printf("[");
        for(int i=0; i< size; i++){
                if(i == size -1){
                        printf("%d",array[i]);
                        break; 
                }        
                printf("%d,", array[i]);
        }
        printf("]\n");
    
}

