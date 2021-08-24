#include<stdio.h>

void bubbleSort(int array[100], int n)
{
    int i, j, swap, swapped, flag;
    for(i=0; i<n-1; i++)
    {
        swapped=0;
        printf("Swapped pairs in pass:\n",i);
        for(j=0; j<n-i-1; j++)
        {
            flag=0;
            if (array[j] > array[j+1])
            {
                swapped=1;
                flag=1;
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            
            }
            if(flag==1)
            {
           
                printArray(array,n);
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
 

}

void printArray(int array[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main()
{
    int array[100], n, i;
    printf("Enter the number of elements of array:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    bubbleSort(array,n);

    printf("\n\nSorted Array in Ascending order:\n");
    printArray(array,n);
}
