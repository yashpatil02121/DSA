#include <stdio.h>

void printArray(int *Arr,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
}

void selectionSort(int Arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int indexOfMin=i,temp;
        for (int j = i+1; j < n; j++) {
           if (Arr[j]<Arr[indexOfMin])
           {
               indexOfMin=j;
           }
        }
        temp=Arr[i];
        Arr[i]=Arr[indexOfMin];
        Arr[indexOfMin]=temp;
    }
    
}
int main (int argc, char *argv[]) {
    int Arr[]={3,4,5,7,9,1,2,6,22};
    int n=9;
    printArray(Arr, n);
    selectionSort(Arr, n);
    printf("Sorted Array:\n");
    printArray(Arr, n);

   return 0;
}