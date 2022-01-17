/******************************************************************************
Maximum and minimum of an array using minimum number of comparisons

*****  Best Approach : Compare in pairs  *****
1)If size of array is odd,then assign value of first element to min and max variables.
2)If size of array is even,then compare between first two elements in array and assign max and min 
values accordingly.
3)For rest elements,repeat the comparisons in pair of two and update the values of max and min.

Time Complexity : O(n)
When size is odd  = 3*(n-1)/2  
When size is even = 1 + 3*(n-1)/2 ...1 for first comparison and 3*(n-1)/2  for rest of the comparisons 

Other Approaches:
1) Simple Linear Search. T=O(n)  
     Worst Case= elements are sorted in descending order 
     Best Case = elements are sorted in ascending order 
2)Tournament Approach - Divide the array into two parts and compare the maximums and minimums of the two parts 
     T=O(n)
     if size/n is power of 2,3n/2 -2 comparisons
     if n is not power of 2, it does more than 3n/2-2 comparisons
     
     HENCE, COMPARING IN PAIRS IS A BEST APPROACH 
*******************************************************************************/
#include <iostream>

using namespace std;
struct Pair            //To return values of max and min
{
    int max;
    int min;
};

struct Pair getMinMax(int A[],int size)
{
   struct Pair MinMax; 
   int i;
   
   //If size of array is odd
   if (size % 2 != 0 )
   {
       MinMax.max = A[0];
       MinMax.min = A[0];
       i=1; //since max and min is initialised with first no.,loop will start from 1. 
   }
   //If size of array is even
   else
   {
       //compare between first two elements in array
       if (A[0]>A[1]) 
       {
          MinMax.max = A[0];
          MinMax.min = A[1];  
       }
       else
       {
          MinMax.max = A[1];
          MinMax.min = A[0];
       }
       i=2; //since we assign max and min to first two elements
   }
   
   //For rest elements, comparing in pairs of two
   while(i < size-1)
   {
       if(A[i]>A[i+1]) //for next adjacent elements
       {
          MinMax.max = A[i];
          MinMax.min = A[i+1];
       }
       else
       {
          MinMax.max = A[i+1];
          MinMax.min = A[i];
       }
       i=i+2;
   }
   return MinMax;
}
int main()
{
    int A[] = { 10, 34, 27, 78, 103, 8};
    int A_size = 6;
    
    Pair MinMax = getMinMax(A,6);   //function call
    cout<<"Maximum element : "<<MinMax.max<<endl;
    cout<<"Minimum element : "<<MinMax.min<<endl;
    return 0;
}
