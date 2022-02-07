#include <stdlib.h>
#include <stdio.h>

//helper function to get the factorial of a number
int factorial(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}


int main() {

    //size of the array input
    int size;
    //elements of the array
    int array[100];
    //output of the program
    int output[100];

    //get all the inputs
    printf("Enter the length of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    //now let's get the factorial of each number in the array
    for (int i = 0; i < size; i++) {
        //call the helper function, factorial()
        output[i] = factorial(array[i]);
    }

    //output the result
    printf("\nHere is the output: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", output[i]);
    }

    return 0;
}
