#include<stdio.h>
    //FInd the maximum number in an array interger.(Divide and conquer)

// Function to find maximum using Divide and Conquer
int findMax(int arr[], int low, int high) {
    // Base case: If the array contains only one element
    if (low == high) {
        return arr[low];
    }

    // Divide the array into two parts
    int mid = (low + high) / 2;

    // Recursively find the maximum in both halves
    int max1 = findMax(arr, low, mid);
    int max2 = findMax(arr, mid + 1, high);

    // Combine: Return the maximum of both halves
    return (max1 > max2) ? max1 : max2;
}

int main() {
    int arr[] = {2, 8, 5, 1, 10, 7, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf(arr[0]);

    int max = findMax(arr, 0, n - 1);

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}


