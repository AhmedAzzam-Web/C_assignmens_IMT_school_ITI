#include <stdio.h>

/*
- First, this problem will comsume a lot of time if solved using two pointers technique or two for loops, where we hold the first element and find the difference between by comparing. So the best and optimim solution is to:
1- First Sort the array using any method
2- Find the difference between the first element and the last element
*/

int MaxDifference(int *arr);
int main(void)
{
    int arr[5] = {10, 23, 30, 61, 100};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int result = MaxDifference(arr);

    printf("Max difference = %d\n", result);
    return result;
}

// Made all the work here so that any variable created will be destroyed from the memory once function returns.
int MaxDifference(int *arr)
{
    int max_difference = 0;
    int temp = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    max_difference = arr[4] - arr[0];
    return max_difference;
}