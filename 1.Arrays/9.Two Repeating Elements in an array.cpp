/******************************************************************************
            TWO REPEATING ELEMENTS IN AN ARRAY 
            
Problem Statement :
    Given an array of n+2 elements. All elements of the array are in range 1 to n. 
    And all elements occur once except two numbers which occur twice. Find the two repeating numbers.
    
Example :
    I/p A= { 1,3,2,4,3,1,6} where n= 5 and n+2(repeating elements) = 7
    O/p = 1,3 
    
Approach : Using Count Array
   1) Declare a integer pointer array called count having size n i.e (size-2)
   2) Use a for loop to traverse an array
        if count[A[i]] ==1 then print A[i]
        else count[A[i]++ 
        
        
        i         0  1   2   3   4   5   6
        A  =>     1  3   2   4   3   1   6
     count =>     0  0   0   0   1   1   0
     
     
   
Time Complexity : O(n)
Space Complexity : O(n)

*******************************************************************************/
#include <iostream>
using namespace std;
//Function Code :
void repeatingElements(int A[],int n)
{
    int *count = new int[sizeof(int)*(n-2)];
    cout<<"Repeating Elements are : ";
    for( int i=0; i<n; i++)
    {
        if(count[A[i]] == 1)
            cout << A[i] << " ";
        else
            count[A[i]]++;
    }
}
//Driver Code :
int main()
{
   int A[] = {1,3,2,4,3,1,6};
    int n = sizeof(A)/sizeof(A[0]);
    repeatingElements(A, n);
    return 0;
}
