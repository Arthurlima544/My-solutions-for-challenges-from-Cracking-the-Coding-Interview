#include <stdio.h>

int sum_with_recursion(int number){
    if(number <= 0){
        return 0;
    }
    return number + sum_with_recursion(number - 1);
}

int pairSum(int a, int b){
    return a + b;
}

int sum_with_for(int number){
    int sum = 0;
    for(int i = 1; i <= number ; i++){
        sum += i;
    }
    return sum;
}

int main(int argc, char* argv[]){
    int res, res2;
    res = sum_with_recursion(4);
    res2 = sum_with_for(4);
    printf("Recursion: %d Using For: %d\n", res, res2);
}