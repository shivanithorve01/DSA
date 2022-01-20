/******************************************************************************
                UNION OF TWO ARRAYS

Union of two arrays: Set of all elements present in both arrays without repeating any element.

Example :
1)For two unsorted arrays :             
I/p A = {2,5,6,7,1}
    B = {6,0,3,5}
O/p C = {2,5,6,7,1,0,3}

    Approach : 1)Copy all elements of A containg m elements in C 
               2)Starting from index 0 in array B containing n elements ,check if element in B is already present
                 in A.If yes,increment j and if not,then copy that element from B in C.
    Time Complexity : O(m + m*n) = O(n^2).
    
2)For two sorted arrays :
I/p A = {2,5,6,7}
    B = {1,3,4,5,8}
O/p C = {1,2,3,4,5,6,7,8}

    Approach : Merge all elements of A and B by taking common element once.
              1)Initialise pointer variables i and j to starting indexes of A and B 
              2)Also initialise m as length of A and n as length of B.
              3)While i<m and j<n,
                 3.1)If A[i]<A[j],copy A[i] and i++.
                 3.2)If A[i]>A[j],copy A[j] and j++.
                 3.3)otherwise , copy A[i] and i++ and j++.
              
                 
    Time Complexity : O(m+n)= O(n+n)= O(n)

*******************************************************************************/
#include <iostream>
using namespace std;
//function for union of two sorted arrays 
void unionArray(int A[],int B[],int m,int n)
{
    int i=0,j=0;
    
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            cout<<A[i++]<<" ";
        }
        else if (A[i]>B[j])
        {
            cout<<B[j++]<<" ";
        }
        else
        {
           cout<<A[i++]<<" ";
           j++;
        }
    }
    
    while(i<m)
    {
      cout<<A[i++]<<" ";
    }
    while(j<n)
    {
        cout<<B[j++]<<" ";
    }
}
//function for union of two unsorted array
void unionUnsorted(int C[],int D[],int x,int y)
{
    for(int i=0;i<x;i++)//To print entire array C.
    {
        cout<<C[i]<<" ";
    }
    for(int j=0;j<y;j++)
    {
        int flag=0;
        for(int i=0;i<x;i++)
        {
            if(C[i]==D[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)//element from D is not present in C
        {
            cout<<D[j]<<" ";//to print elements from D which are not present in C.
        }
    }
    
}
//Main Function 
int main()
{
    int A[] = {2,5,6,7};
    int B[] = {1,3,4,5,8};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);
    
    int C[] = {2,5,6,7,1};
    int D[] = {6,0,3,5};
    int x = sizeof(C)/sizeof(C[0]);
    int y = sizeof(D)/sizeof(D[0]);

    cout<<"Union of sorted arrays is :\n";
    unionArray(A,B,m,n);
    cout<<"\nUnion of unsorted arrays is :\n";
    unionUnsorted(C,D,x,y);
    return 0;
}