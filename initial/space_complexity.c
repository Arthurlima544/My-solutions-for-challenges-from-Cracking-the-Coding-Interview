#include <stdio.h>

/*
    when we call for sum_with_recursion(5) the call stack:
    - sum_with_recursion(5)
        - sum_with_recursion(4)
            - sum_with_recursion(3)
                - sum_with_recursion(2)
                    - sum_with_recursion(1)
                        - sum_with_recursion(0)
    this is added to the recursion stack and it takes up actual memory, the compiler
    could identify this thing and optimize converting into an for loop as in fuction 
    sum_with_for(), but sometimes we need some tail recursion to optimise it.
*/

// Uses O(n) on space complexity, we use 'n' memory for each call in stack.
int sum_with_recursion(int number){
    if(number <= 0){
        return 0;
    }
    return number + sum_with_recursion(number - 1);
}

int pairSum(int a, int b){
    return a + b;
}
// Uses O(1) on space complexity, we only use sum and i, in the memory
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