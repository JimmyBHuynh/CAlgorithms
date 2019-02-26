
//sorting of array list using bubble sort
#include <stdio.h>
#include <stdlib.h>
/*Displays the array, passed to this method*/
void display(int arr[], int n){
    
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
}

/*Swap function to swap two values*/
void swap(int *first, int *second){
    
    int temp = *first;
    *first = *second;
    *second = temp;
    
}

/*This is where the sorting of the array takes place
 arr[] --- Array to be sorted
 size --- Array Size
 */
void bubbleSort(int arr[], int size){
    printf("Sorting Steps: \n");
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                display(arr, size);                // 
            }
        }
    }
}

int main(int argc, const char * argv[]) {
	system("clear");
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n); // E.g. 8
    
    printf("Enter the elements of the array\n");
    int i;
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i] );
    }
    system("clear");
    printf("BUBBLE SORT\n");
    printf("Original array: ");
    display(arr, n);                 
    
    bubbleSort(arr, n);
    
    printf("Sorted array: ");
    display(arr, n);                
    printf("\nHOW IT WORKS\n");
    printf("Bubble sort works by repeatedly swapping the adjacent elements\nif they are in wrong order\n\n");
     printf("TIME COMPLEXITY\n");
    printf("Worst and Averaget Time Complexity is O(n^2)\nBest Case Time Complexity is O(n) if already sorted\n");
    return 0;
}
