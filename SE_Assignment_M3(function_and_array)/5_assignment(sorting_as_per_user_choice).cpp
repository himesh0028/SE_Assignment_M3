/*5. WAP to take two Array input from user and sort them
in ascending ordescending order as per user’s choice
*/
#include <stdio.h>

int main() {
    int n1, n2, i, j, temp;
    char order;

    // Input size of arrays
    printf("Enter the size of the  array: ");
    scanf("%d", &n1);
    int arr1[n1];

   

    // Input elements of the first array
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    

    // Input sorting order
    printf("Enter 'A' for ascending order or 'D' for descending order: ");
    scanf(" %c", &order);

    // Sort the first array
    for (i = 0; i < n1-1; i++) {
        for (j = 0; j < n1-i-1; j++) {
            if ((order == 'A' && arr1[j] > arr1[j+1]) || (order == 'D' && arr1[j] < arr1[j+1])) {
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    // Print the sorted first array
    printf("Sorted first array: ");
    for (i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");


    return 0;
}

