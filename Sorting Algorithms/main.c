#include "sorting.h"


void main(){
    int arr [] = {60, 30, 50, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array : \n");
    print_sorted(arr,n);
    

    bubble_sort(arr,n);
    printf("Bubble Sort : \n");
    print_sorted(arr,n);
    

    selection_sort(arr,n);
    printf("Selection Sort : \n");
    print_sorted(arr,n);
    

    insertion_sort(arr,n);
    printf("Insertion Sort : \n");
    print_sorted(arr,n);


    merge_sort(arr,0,n-1);
    printf("Merge Sort : \n");
    print_sorted(arr,n);


    quick_sort(arr,0,n-1);
    printf("Quick Sort : \n");
    print_sorted(arr,n);


}