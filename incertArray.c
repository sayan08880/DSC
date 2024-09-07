#include <stdio.h>

// Function to display the array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// Function to insert an element into the array at a specified index
int indfun(int arr[], int size, int element, int index, int capacity) {
    if (size >= capacity) {
        return -1;
    }
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void print(){
	printf("\n");
}

// Main function
int main() {
    int arr[100];
    int size;
	int capacity = 100;
	//mejaring the array capacity
	printf(" ***** THE CAPACITY OF ARRAY IS %d ***** \n\n",capacity);
	
	//input size
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &size);
    print();
    //enter element
    printf(" ***** ENTER THE ELEMENTS OF THE ARRAY *****\n\n");
    for (int i = 0; i < size; i++) {
        printf("ENTER THE [%d] ELEMENT: ", i);
        scanf("%d", &arr[i]);
    }
    //print fumtion
    print();
    display(arr, size); 

    // Element to be added
    int element;
    int indexO;
    printf("\n ENTER THE ELEMENT INPUT INDEX POCITION : ");
    scanf("%d",&indexO);
    printf("\n ENTER THE ELEMENT : ");
    scanf("%d",&element);
    int index = indexO -1;

    // Insert the element
    if (index >= 0 && index <= size && indfun(arr, size, element, index, capacity) == 1) {
        size++;
    }

    // Display the array after insertion
    display(arr, size);

    return 0;
}