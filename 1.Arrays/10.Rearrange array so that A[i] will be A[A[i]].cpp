/******************************************************************************
    Rearrange an array arr[i] so that it becomes arr[arr[i] without using extra space
    
Example :
    Input = arr = {3,1,0,2,4}
    Output = arr = {2,1,3,0,4}
    Explaination :
        arr[0] is 3 hence arr[arr[0]] = arr[3]= 2
        arr[1] is 1 hence arr[arr[1]] = arr[1]= 1
        arr[2] is 0 hence arr[arr[2]] = arr[0]= 3
        arr[3] is 2 hence arr[arr[3]] = arr[2]= 0
        arr[4] is 4 hence arr[arr[4]] = arr[4]= 4
        
Approach :
    1)We can simply make new array and store elements directly but here we can't use any extra space.
           i             0   1   2   3   4
    previous val arr     3   1   0   2   4
    Updated val  arr     2  ....after first swap
    2)Here if we try to store value at index 3 ie 2 in arr[0] then for next element,
        eg.In arr[2], we need to store element at arr[0] which is 3.
        but in last step we have changed arr[0] to 2.
    3)So here we understand that we have to store both previous and updated values.
    4)But on the other hand,we can't use any extra space to store both the values.
        So we need to store both the values(ie. previous & updated) in just one space.
        ie. we need to store both 3(previous value) & 2(updated value) in arr[0].
    
Trick to remember => a = a + b*n   
                    where n is size of an array
                          a is  arr[i]
                          b is arr[arr[i]]
    5)In order to get updated values we will simply do 
    arr[i]= a + b%n * n and then arr[i] = arr[i]/n 
    eg. updated value b = 3 + 2%5 * 5 = 3 + 2*5 = 13
        then b = b/n = 13/5 = 2 
    6)In order to extract previous value from 13
       previous value a = b%n = 13%5 = 3
       
       
Space Complexity : should be O(1)
Time Complexity : O(n) with 2 traversals.
    
*******************************************************************************/
#include <iostream>
using namespace std;
//function to print array :
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//Rearrange Function Code :
void rearrange(int arr[],int n)
{
   for (int i=0;i<n;i++)
   {
        int a = arr[i];
        int b = arr[a]; // b= arr[arr[i]] 
        arr[i] = a + (b%n)*n;
   }
   for (int i=0;i<n;i++)
   {
        arr[i] = arr[i]/n;
   }
}
//Driver Code :
int main()
{
    int arr[] = {3,1,0,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nGiven array is :\n";
    printArray(arr,n);
    
    rearrange(arr,n);
    cout<<"\nUpdated array is :\n";
    printArray(arr,n);
    
    return 0;
}