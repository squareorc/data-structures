#include <iostream>
using namespace std;

int smallestindex(int arr[], int size)
{
    int small = INT_MAX;
    int sindex;
    for (int i = 0; i < size; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
            sindex = i;
        }
    }

    return sindex;
}

int largestindex(int arr[], int size)
{
    int large = INT_MIN;
    int lindex;
    for (int i = 0; i < size; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
            lindex = i;
        }
    }

    return lindex;
}

int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    int s = smallestindex(arr, size);
    int l = largestindex(arr, size);

    swap(arr[s], arr[l]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}