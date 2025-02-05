#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int num){
	for(int i = 2;i < sqrt(num); i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}


int main(void){
	int numbers[] ={10,11, 1287,23323, 3434, 121, 35, 75, 834};
	int length = sizeof(numbers)/sizeof(int);
	
	for(int i=0; i < length; i++){
		if(is_prime(numbers[i])){
			printf("number: %d is Prime\n", numbers[i]);
	  	}else{
			printf("number: %d is NOT Prime\n", numbers[i]);
		}
	}
	return 0;
} 
