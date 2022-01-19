/******************************************************************************
Problem Statement : Move all negative numbers to one side of an array without maintaining their order.

Example :
I/p A={-7,1,3,-9,8,-2,5}
O/p A={-7,-2,-9,3,8,1,5}

Approach 1 : 
            A   =>   -7    1   3   -9    8    -2   5  
                      ^                            ^
                     i=0                            j=n-1
                     
    1)Initialise two varibles, i=0 and j=len-1
    2)while (i<j)
        if A[i] is negative then i++
        if A[j] is positive then j--
        if i<j then swap A[i] and A[j]
        
Approach 2 :
             A   =>   -7    1   3   -9    8    -2   5  
                      ^                            
                     i=0                        
                     j=0
    1)initialise both i and j to 0.
    2)traverse the array using i,
        when A[i] is negative and i!=j then swap A[i] and A[j] then increment j.
        
*******************************************************************************/
#include <iostream>
using namespace std;
//swap Function
void swap(int A[],int para1,int para2)
{
    int temp = A[para1];
    A[para1] = A[para2];
    A[para2] = temp;
}
//Approach 1 Function:
/*void NegativeToLeft(int A[],int n)
{
    int i=0;
    int j=n-1;
    
    while(i<j)
    {
        while(A[i]<0)
        {
            i++;
        }
        while(A[j]>=0)
        {
            j--;
        }
        if (i<j)
        {
            swap(A,i,j);
        }
    }
}*/
//Approach 2 Function :
void NegativeToLeft(int A[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            if (i != j)
                swap(A,i,j);
            j++;
        }
    }
}
//print function to print the array
void printArray(int A[],int n)
{
   for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
//Main Function :
int main()
{
    int A[]= {-7,1,3,-9,8,-2,5};
    int n = sizeof(A)/sizeof(A[0]);
    NegativeToLeft(A,n);    //function call
    printArray(A,n);
    return 0;
}


