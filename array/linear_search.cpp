#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int size, target;
    cout << "enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "\nenter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nThe array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nenter the target element: ";
    cin >> target;

    if (linearSearch(arr, size, target) == -1)
    {
        cout << "element not found!";
    }
    else
    {
        cout << "element at index: " << linearSearch(arr, size, target) << endl;
    }
}