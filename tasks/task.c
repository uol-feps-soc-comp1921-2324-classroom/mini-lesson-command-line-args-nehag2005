#include <stdio.h>
#include <stdlib.h>

/**
 * argv[1] - num1
 * argv[2] - num2
 */
int main(int argc, char *argv[]) {
   

    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 < 1) 
    {
        printf("Error: Invalid value for num 1\n");
        return 2;
    }

    if (num2 < 1)
    {
        printf("Error: Invalid value for num 2\n");
        return 2;
    }

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
