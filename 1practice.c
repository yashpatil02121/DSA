#include <stdio.h>

void BinarySearch(int *A,int n, int S)
{
    int low,mid,high;
    low = 0;
    high = n - 1;
    while (low<=high)
    {
        mid = low+high/2;
        if (A[mid]==S)
        {
            return mid;
        }
        else if(A[mid]<S){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    return -1
}

int main (int argc, char *argv[]) {
    int A[] = {};     
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d",&A[i]);
   }
   int S;
   printf("Enter the element to be searched");
   scanf("%d",&S);
   BinarySearch(A,n,S);    
    
    

    return 0;
}

  