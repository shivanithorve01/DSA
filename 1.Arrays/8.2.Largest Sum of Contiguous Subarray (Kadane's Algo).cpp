/******************************************************************************
LARGEST SUM OF CONTIGUOUS SUBARRAY 
            
Problem Statement = Given an array A[] with n elements.find the maximum sum of a subarray 
among all subarrays of that array. A subarray of array A[] of length n is a contiguous segment from A[i] through A[j]
where 0<= i <= j <= n. Some properties of this problem are:
    If the array contains all positive numbers, the maximum subarray is the entire array.
    Several different sub-arrays may have the same maximum sum.
    
Example :
    1) A = {2,1,-2,5,6,-7,3}
       Subarray = {5,6} 
       o/p Largest Sum = 11
       
    2) B = {7,2,3,1,10}
       Subarray = {7,2,3,1,10}... if all nos are positive then their sum is largest sum.
       o/p largest Sum = 23
       
    3) C = {-2}...only one negative number
        Subarray = {-2}
        o/p Largest Sum = -2
        
    4) D = {-9,-4,-3,-7,-2,-10} ...if all elements are negative then largest sum should be largest element in array
        Subarray = {-2}
        o/p Largest Sum = -2
        
Best Approach : Kadane's Algorithm 
    Find all possible subarrays and their sum.Largest among them is required largest sum.
    1) Initialise max_sum=A[0]
    2) Initialize curr_sum = 0
    3) for loop to iterate over an array, i=0 to i=n-1
    6) add A[i] to curr_sum for every pass.
    7) if curr_sum > max_sum, then max_sum=curr_sum
    8) return max_sum

Time Complexity : O(n)
Space Complexity :O(1)

Tip : Don't use sorting technique as in order to find subarray, order of an array becomes important.
      Time Complexity will reduce in Divide & Conquer Method to O(nlogn) but space complexity will increase 
      to O(nlogn)

*******************************************************************************/
#include <iostream>
using namespace std;
//Function
void largestSum (int Arr[], int n)
{
    //if we got only one negative no. in an array then largest sum should be no. itself
    //if we got all negatives then sum should be largest element among all
    int max_sum = Arr[0] ; 
    int curr_sum = 0;
    for (int i=0;i<n;i++)
    {
        curr_sum = curr_sum + Arr[i];
        if(curr_sum > max_sum)
        {
                max_sum = curr_sum;
        }
        //if max_sum is negative,ignore that max_sum and start curr_sum again from next element
        if(max_sum < 0) 
        {
            curr_sum = 0;
        }
    }
    
    cout<<max_sum<<" ";
}

//Main Function
int main ()
{
  int A[] = { 2, 1, -2, 5, 6, -7, 3 };
  int a = sizeof(A)/sizeof(A[0]);
  int B[] = {7,2,3,1,10};
  int b = sizeof(B)/sizeof(B[0]);
  int C[] = {-2};
  int c = sizeof(C)/sizeof(C[0]);
  int D[] = {-9,-4,-3,-7,-2,-10};
  int d = sizeof(D)/sizeof(D[0]);
  
  cout<<"\nLargest Sum of subarray of A :";
  largestSum(A,a);
  cout<<"\nLargest Sum of subarray of B :";
  largestSum(B,b);
  cout<<"\nLargest Sum of subarray of C :";
  largestSum(C,c);
  cout<<"\nLargest Sum of subarray of D :";
  largestSum(D,d);
  return 0;
}

