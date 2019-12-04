#include <stdio.h>
#include <stdlib.h>

int array[] = {1, 3, 5, 7, 9};

int binary_search(int *arr, int arr_len, int item)
{
    int low = 0;
    int high = arr_len - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int guess = arr[mid];
        if (guess == item) {
            return mid;
        } else if (guess > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return -1;
}

int main()
{
    printf("%d\n", binary_search(array, sizeof(array)/sizeof(int), 3));
    printf("%d\n", binary_search(array, sizeof(array)/sizeof(int), -1));
    return 0;
}
