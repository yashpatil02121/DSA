#include <stdio.h>

// int linearSearch(int arr[], int size,int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==element)
//             return i;
//     }
//     return -1;
// }

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    return -1;
    
}

int main (int argc, char *argv[]) {
    int element=5,size=11;
    int arr[]={13,57,23,56,34,5,68,45,24,23};
    int result=linearSearch(arr,size,element);
    printf("Element %d is at index %d \n",element,result );
    return 0;
}


// #include<stdio.h>
 
// int linearSearch(int arr[], int size, int element){
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }
 

 
// int main(){
//     // Unsorted array for linear search
//     // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
//     // int size = sizeof(arr)/sizeof(int);
 
//     // Sorted array for binary search
//     int arr[] = {1,3,5,56,64,73,123,225,444};
//     int size = sizeof(arr)/sizeof(int);
//     int element = 444;
//     int searchIndex = binarySearch(arr, size, element);
//     printf("The element %d was found at index %d \n", element, searchIndex);
//     return 0;
// }
