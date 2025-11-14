#include <stdio.h>

int main() {

    const int max = 10;
    int arr[max];
    int CS = 5; 
    int i; 
    int E, choice, index = -1;

    for (i = 0; i < CS; i++) {
        arr[i] = (i + 1) * 10;
    }

    
    printf("Initial Array (%d elemens):\n[ ", CS);
    for (i = 0; i < CS; i++) {

        printf("%d%s", arr[i], (i < CS - 1) ? ", " : "");
    }
    printf(" ]\n\n");

    if (CS >= max) {
        printf("Error: Array is full.\n");
        return 1;
    }

    printf("Enter value to insert: ");
    if (scanf("%d", &E) != 1) return 1;

    printf("Position (1:Front, 2:Middle, 3:End): ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
        case 1:
            index = 0;
            break;
        case 3:
            index = CS; 
            break;
        case 2:
            
            printf("Enter middle index (1 to %d): ", CS - 1);
            if (scanf("%d", &index) != 1) return 1;

            if (index <= 0 || index >= CS) {
                printf("Error: Invalid middle index.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid choice.\n");
            return 1;
    }

    for (i = CS; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = E;
    CS++;

    printf("\nArray After Insertion (at index %d):\n[ ", index);
    for (i = 0; i < CS; i++) {
        printf("%d%s", arr[i], (i < CS - 1) ? ", " : "");
    }
    printf(" ]\n");

    return 0;
}

