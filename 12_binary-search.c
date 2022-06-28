#include <stdio.h>
int binarySearch(int arr[], int size, int element)
{
    int low,mid,high;
    low=0;
    high=size-1;

    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        else if (arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int element = 23, size = 11;
    int arr[100] = {1, 3, 5, 7, 23, 56, 68, 100, 167, 233};
    int capacity = sizeof(arr) / sizeof(int);
    int result = binarySearch(arr, size, element);
    printf("Element %d is at index %d \n", element, result);
    return 0;
}

