#include <iostream>

using namespace std;
void printarr(int arr[], int size);
void sort(int arr[], int size);

int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int length = sizeof(arr) / sizeof(arr[0]);
    sort(arr, length);
    printarr(arr, length);
    return 0;
}

void sort(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printarr(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}