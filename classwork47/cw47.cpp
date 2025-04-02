#include <iostream>
using namespace std;

void print_array(int* arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* remove_last_element(int* arr, int& size)
{
    if (size <= 1) 
    {
        delete[] arr;
        return nullptr;
    }

    int new_size = size - 1;
    int* new_array = new int[new_size];

    for (int i = 0; i < new_size; i++)
    {
        new_array[i] = arr[i];
    }

    delete[] arr;
    size = new_size;
    return new_array;
}

int main()
{
    int size = 5;
    int* arr = new int[size] {1, 2, 3, 4, 5};

    cout << "Original array: ";
    print_array(arr, size);

    arr = remove_last_element(arr, size);

    cout << "After removing last element: ";
    print_array(arr, size);

    delete[] arr;
    return 0;
}
