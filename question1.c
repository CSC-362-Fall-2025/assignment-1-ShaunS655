//Place your needed include statements here (This is roughly the equivelent of libraries in python)
#include <stdio.h>
#include <stddef.h>

int main(int argc, char* argv[]){
  //Place your solution code here

  int n; // Value to enter
    int *arr = NULL; // array size

    // Checking for array size
    printf("Enter Array Size: ");
    if (scanf("%d", &n) != 1){
        printf("Invalud input. Try again.");
        return 1;
    }

    if (n <= 0) {
        printf("It must be more than 0.\n");
        return 0; 
    }

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        fprintf(stderr, "Memory Error!\n");
        return 1;
    }

    // Entering values in the array, checking for invalid input
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error on Input!\n");
            free(arr);
            return 1;
        }
    }

    // Reversing the order
    printf("Reversed Order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing up the memory allocation.
    free(arr);
    arr = NULL;

  return 0;
}
