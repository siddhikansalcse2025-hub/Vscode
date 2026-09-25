#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = 7;
    int target = 9;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
