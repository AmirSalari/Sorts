#include <iostream>
using namespace std;

void SelectionSort(int arr[], int length);
void PrintArray(int arr[], int lenght);
void AllocateArray();

int main()
{
    AllocateArray();
    return 0;
}

void AllocateArray()
{
    int size;
    cout << "Please Enter Array Size: ";
    cin >> size;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] is: ";
        cin >> arr[i];
    }
    cout << "Original Array: " << endl;
    PrintArray(arr, size);
    SelectionSort(arr, size);
    cout << "Sorted Array: " << endl;
    PrintArray(arr, size);
}

void SelectionSort(int arr[], int length)
{
    int min;
    for (size_t i = 0; i < length - 1; i++)
    {
        min = i;
        for (size_t j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[min])
            {
                swap(arr[j], arr[min]);
            }
        }
    }
}

void PrintArray(int arr[], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
