/******************************************************************************
Problem Statement : Sort array containing 0,1 and 2 without using Sorting Algorithm

Example :
I/p A= {0,2,1,2,0,1}
O/p A ={0,0,1,1,2,2}

Simple Approach : Counting Method 
1) Count the number of 0,1 and 2s in an array. 
2) Put zeros at start then 1s and then put 2s at the end.
 
 Drawbacks =
    1) We need to traverse array 2 times. 1 for counting and other for putting them in position.
    2) Does not work if values are part of structures as we simply put 0s, 1s, and 2s one by one.
    
Time Complexity = O(n)

*******************************************************************************/
#include <iostream>
using namespace std;
//Sorting Function 
void Sort012(int *A,int n)
{
    int Count0=0,Count1=0,Count2=0;
    // To count no 0f 0,1,2 in an array
    for(int i=0;i<n;i++)  
    {
        if (A[i]==0)
            Count0++;
        if (A[i]==1)
            Count1++;
        if (A[i]==2)
            Count2++;
    }
    //To put all 0s at start of array i.e from index starting from 0 to (Count0-1)
    for (int i=0;i<Count0;i++)
    {
        A[i]=0;
    }
    //To put all 1s after all 0s i.e from index starting from Count0 to (Count0+Count1)
    for (int i=Count0;i<(Count0+Count1);i++)
    {
        A[i]=1;
    }
    //To put all 2s after all 1s i.e from index starting from (Count0+Count1) to (n-1)
    for (int i=(Count0+Count1);i<n;i++)
    {
        A[i]=2;
    }
    
    return;
}
//Main Function
int main()
{
    int A[]={0,2,1,2,0,1,2,0,1,2,2,1};
    int n = sizeof(A)/sizeof(A[0]);
    Sort012(A,n);                   //Function Call
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    return 0;
}