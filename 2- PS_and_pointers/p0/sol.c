// /***************************************************************************************/
// /****************************  Ahmed Azzam ******************************/
// /***************************************************************************************/
// /*************************** Removing Duplicates ***************************************/
// /***************************************************************************************/

/*
1- Sort the array (Manual sort with bubble sort or using qsort from <stdlib.h>)
2- Compare each element with its adjacent to check and remove the duplicates using two pointers techinque instead of using double for loops
4- fill the remaining elements with zeros
*/

#include <stdio.h>

void SortedArray(int *arr, int size);
void main(void)
{
    int arr[9] = {3, 4, 5, 1, 1, 2, 2, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    SortedArray(arr, size);

    // print sorted array
    for (int i = 0; i < size; i++)
    {
        printf("element %d: %d\n", i, arr[i]);
    }
}

void SortedArray(int *arr, int size)
{
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}