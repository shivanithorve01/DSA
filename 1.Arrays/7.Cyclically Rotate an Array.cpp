/******************************************************************************
                    CYCLIC ROTATION OF AN ARRAY 
                    
Example :
I/p A = {1,2,3,4,5}
O/p A = {5,1,2,3,4}

Approach:
    1)Simple Approach :
        1)store last element in temp.
        2)store A[i]=A[i-1] for i=n-1 to i=0
        3)store value of temp in A[0]
        
    2)2 Pointer Approach :
        1)Initialize i=0 and j=n-1
        2)for (i!=j),swap A[i] and A[j] and increment i.
        
        1   2   3   4   5   (swap)    ===>   5   2   3   4   1     (swap) ===>  5   1   3   4   2   (swap)
       i=0             j=n-1                    i=1          j=n-1                    i=2      j=n-1
       
        ===>5   1   2   4   3 (swap)  ===> 5   1   2   3   4 (stop as i==j)
                       i=3  j=n-1                         i=j
        
Time Complexity: O(n)

*******************************************************************************/
#include <iostream>
using namespace std;
//Simple Approach Function
void simpleCyclicRotate(int A[],int n)
{
    int temp = A[n-1];
    for(int i=n-1;i>0;i--)
    {
      A[i]=A[i-1];
    }
    A[0]=temp;
}
//2 Pointer Approach
void cyclicRotate(int A[],int n)
{
    int i=0,j=n-1;
    while(i!=j)
    {
        int temp = A[i];
        A[i]=A[j];
        A[j]=temp;
        i++;
    }
}
//Main Function
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Given array is :\n";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
        
    simpleCyclicRotate(A,n);
    
    cout << "\nCyclically Rotated array by approach 1 is: \n";
    for (int i = 0; i < n; i++)
        cout <<A[i] << " ";
    
    cyclicRotate(A,n); //here,given array will be 5 1 2 3 4 
    cout << "\nCyclically Rotated array by 2 pointer approach is: \n";
    for (int i = 0; i < n; i++)
        cout <<A[i] << " ";
    
    return 0;
}