/******************************************************************************
           DUPLICATE ELEMENTS IN AN ARRAY 
            
Problem Statement :
    Given an array of n elements which contains elements from 0 to n-1,
    with any of these numbers appearing any number of times.
    Find these repeating numbers in O(n) and using only constant memory space. 
    It is required that the order in which elements repeat should be maintained.
    If there is no repeating element present then print -1.
    
Example :
    I/p A= { 1,3,2,4,3,1,4} where n= 5 and n+2(repeating elements) = 7
    O/p = 1,3,4 

Approach 1 : Using Sorting   
    If we sort the array, then same element is found at i and i+1 then number is duplicate.
     array        1    3   2   4   3   1   4
    sorted array  1    1   2   3   3   4   4
   
Time Complexity : O(n log n) if merge sort is used.
Space Complexity : O(1)


*******************************************************************************/
#include <iostream>
using namespace std;
void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
  
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
  
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
  
// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
  
// Function to print an array
void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}
//Function Code :
void duplicates(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1])
        {
            cout<<A[i]<<" ";
        }
    }
}
//Driver Code :
int main()
{
    int A[] = { 1,3,2,4,3,1,4 };
    int n = sizeof(A) / sizeof(A[0]);
    cout<<"Given array is :\n";
    printArray(A,n);
    mergeSort(A,0,n-1);
    cout<<"\nDuplicate Elements are :\n";
    duplicates(A,n);
    return 0;
}

