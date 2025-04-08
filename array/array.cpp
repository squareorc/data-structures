#include<bits/stdc++.h>
using namespace std;

int main(){
    //declaring an array
    /*
    array is a collection of elements of the same datatype
    placed in a contiguous memory locations [1000->1004->1008]
    can be referenced using an index to a unique identifier
    */
    // finding the smallest element in the array

    const int size = 5;
    int arr[size];
    cout<<"Enter the array elements separated by space: ";
    for (int i = 0; i < size; i ++){
        cin >> arr[i] ;
    }
    cout << "Array is: ";
    for (int i = 0; i< size; i ++ ){
        cout <<arr [i] << " ";
    }
    int smallestindex=0;
    int smallest = INT_MAX;
    //int largest = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            smallestindex = i;
        }
        
    }
    
    cout << "\nsmallest element index is: "<<smallestindex;
    cout << "\nsmallest element is: " << smallest;
    
    return 0;

}