#include <iostream>

using namespace std;
void printArray(int arr[], int size);
void sort1(int arr[], int size);
void sort2(int arr[], int size);

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    sort2(arr, size);
    printArray(arr, size);
}

void printArray(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort3(int arr[], int size)
{
    int key, j;
    for (size_t i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        // while (j >= 0 && arr[j] > key)
        // {
        //     arr[j + 1] = arr[j];
        //     j = j - 1;
        // }
        for (size_t j = i - 1; i >= 0 && arr[j] > key; i--)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}