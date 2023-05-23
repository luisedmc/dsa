#include <stdio.h>

void SelectionSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        if (i != minIndex)
        {
            int swap = array[i];
            array[i] = array[minIndex];
            array[minIndex] = swap;
        }
    }
}

int main()
{
    int array[5] = {9, 5, 7, 1, 2};
    int size = sizeof(array) / sizeof(array[0]);

    SelectionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}