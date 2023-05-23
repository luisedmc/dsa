#include <stdio.h>

void InsertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int tmp = array[i];
        int j = i - 1;
        while (j > -1 && tmp < array[j])
        {
            array[j + 1] = array[j];
            array[j] = tmp;
            j--;
        }
    }
}

int main()
{
    int array[5] = {9, 5, 7, 1, 2};
    int size = sizeof(array) / sizeof(array[0]);

    InsertionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}