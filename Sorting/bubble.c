#include <stdio.h>

void BubbleSort(int array[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
}

int main()
{
    int array[5] = {9, 5, 7, 1, 2};
    int size = sizeof(array) / sizeof(array[0]);

    BubbleSort(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}