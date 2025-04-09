#include <iostream>
using namespace std;

int sumofarray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int productofarray(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }

    return product;
}

int main()
{
    const int size = 5;
    int arr[size];

    cout << "Enter the elements for your array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "the array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nsum of the elements in the array is: " << sumofarray(arr, size);
    cout << "\nThe product of the elements in the array is: " << productofarray(arr, size);

    return 0;
}