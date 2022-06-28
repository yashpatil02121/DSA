#include <stdio.h>

void printArray(int *Arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

void bubbleSort1(int *Arr, int n)
{
    int temp;
    int sortedArray = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass number %d\n", i + 1);
        sortedArray = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                sortedArray = 0;
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
        if (sortedArray)
        {
            return;
        }
    }
}

void bubbleSort2(int Arr[], int size)
{
    int temp, sorted = 0;
    for (int i = 0; i < size - 1; i++)
    {
        sorted = 1;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                /* code */
                sorted=0;
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;

            }
        }
        if (sorted)
        {
            return;
        }
        
    }
}

void bubbleSort(int Arr[], int size)
{
    int temp;
    for (int i = 0; i < size-1; i++) {
       for (int j = 0; j < size-i-1; j++) {
          if (Arr[j]>Arr[j+1])
          {
              temp=Arr[j];
              Arr[j]=Arr[j+1];
              Arr[j+1]=temp;
          }
          
       }
    }
}

int main(int argc, char *argv[])
{
    int Arr[] = {7, 6, 5, 4, 3, 2};
    // int Arr[]={1,2,3,4,5,6};
    int size = 6;
    printArray(Arr, size);
    bubbleSort(Arr, size);
    printArray(Arr, size);
    return 0;
}