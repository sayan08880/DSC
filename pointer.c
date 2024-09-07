#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    printf("ENTER THE NUMBER OF INTEGERS: ");
    scanf("%d", &i);

    int *ptr = (int *)malloc(i * sizeof(int));
    if (ptr == NULL) {
        printf("MEMORY NOT AVAILABLE");
        exit(1);
    }

    for (n = 0; n < i; n++) {
        printf("ENTER AN INTEGER: ");
        scanf("%d", ptr + n); // Corrected to ptr + n
    }

    printf("You entered: ");
    for (n = 0; n < i; n++) {
        printf("%d ", *(ptr + n)); // Corrected placement of return 0;
    }

   // free(ptr); // Free the allocated memory
    return 0;
}

