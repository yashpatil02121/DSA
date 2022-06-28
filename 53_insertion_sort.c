#include <stdio.h>

void printArray(int *Arr,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
}


void insertionSort(int Arr[], int size)
{
    int j,key;
    for (int i = 1; i < size-1; i++)
    {
        key=Arr[i];
        for (int j = i-1; j>=0 && Arr[j]>key; j--)
        {
            Arr[j+1]=Arr[j];
        }
        Arr[j+1]=key;
    }
}


int main (int argc, char *argv[]) {
    int Arr[]={3,4,5,7,9,1,2,6,22};
    int n=9;
    printArray(Arr, n);
    insertionSort(Arr, n);
    printf("Sorted array:\n");
    printArray(Arr, n);

   return 0;
}




// void insertionSort0(int *Arr, int n)
// {
//     int key,j;
//     for (int i = 1; i < n-1; i++)
//     {
//         key = Arr[i];
//         for ( j = i-1; j>=0 && Arr[j]>key ; j--)
//         {
//             Arr[j+1]=Arr[j];
//         }
//         Arr[j+1]=key;
//     }
// }


// void insertionSort1(int *Arr, int size)
// {
//     int key,j;
//     for (int i = 1; i < size-1; i++)
//     {
//         key = Arr[i];
//         for ( j = i-1; j>=0 && Arr[j]>key ; j--)
//         {
//             Arr[j+1]=Arr[j];
//         }
//         Arr[j+1]=key;
//     }
// }
