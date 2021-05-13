#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
void QuickSort(int arr[], int left, int right);
void PrintArray(int arr[], int size);
int Partition(int arr[], int left, int right);

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    PrintArray(arr, size);
    QuickSort(arr, 0, size - 1);
    PrintArray(arr, size);
    return 0;
}

void PrintArray(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void QuickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pi = Partition(arr, left, right);
        QuickSort(arr, left, pi - 1);
        QuickSort(arr, pi + 1, right);
    }
}

int Partition(int arr[], int left, int right)
{
    int i = left - 1;
    int pivot = arr[right];
    for (size_t j = left; j < right; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return (i + 1);
}
