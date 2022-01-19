/******************************************************************************
Problem Statement : Sort array containing 0,1 and 2 without using Sorting Algorithm

Example :
I/p A= {0,2,1,2,0,1}
O/p A ={0,0,1,1,2,2}


        Best Approach : DNF (Dutch National Flag) Sorting
    
             Zero      Ones     Unknown = Given Array    Twos           Regions
            0   0   1   1   1   ?   ?   ?   ?   ?   ?   2   2   
                    ^           ^                       ^
                   low         mid                     high             Pointers
                   
    1)Given array will be in unknown region.
    2)Initialise low pointer at start of ones, index 0.
                 mid pointer at start of unknown region,index 0.
                 high pointer at start of twos,index (n-1).
    3)while(mid<=high) as we need to minimise unknown region
      if A[mid]= 0 then swap(low,mid),low++,mid++
      if A[mid]= 1 then mid++
      if A[mid]= 2 then swap(mid,high),high--
      
Time Complexity = O(n) as array is traversed only once.
                  In each operation either mid id incrementing or high is decrementing.
                  So Unknown array is shrinking.

*******************************************************************************/
#include <iostream>
using namespace std;
void swap(int A[],int para1,int para2)
{
    int temp = A[para1];
    A[para1] = A[para2];
    A[para2] = temp;
}
void Sort012(int A[],int n)
{
    //initialising pointer variables
    int low =0,mid=0,high=n-1;
    //Iterating through array
    while(mid<=high)
    {
        if(A[mid]==0)
        {
            swap(A,mid,low);
            low++;
            mid++;
        }
        else if(A[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(A,mid,high);
            high--;
        }
    }
}
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
