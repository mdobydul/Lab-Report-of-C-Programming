#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    printf("Choose type of runtime error to demonstrate:\n");
    printf("1. Division by zero\n2. NULL pointer dereference\n3. Array out of bounds\n4. File open error\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            int a = 10, b = 0;
            printf("Result: %d\n", a / b); // Division by zero
            break;
        }
        case 2: {
            int *ptr = NULL;
            printf("Value: %d\n", *ptr); // NULL pointer dereference
            break;
        }
        case 3: {
            int arr[5] = {1,2,3,4,5};
            printf("Out of bounds: %d\n", arr[10]); // Array out of bounds
            break;
        }
        case 4: {
            FILE *fp = fopen("nonexistent.txt", "r");
            if(fp == NULL) {
                perror("File open error"); // File does not exist
            }
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
