/******************************************************************************
                        INTERSECTION OF TWO ARRAY 
                        
Intersection of Two Arrays: Set of common elements present in both arrays.

Example :
1)For two unsorted arrays :             
I/p A = {2,5,6,7,1}
    B = {6,0,3,5}
O/p C = {6,5}

    Approach : Traverse through both arrays and print common elements
               1)for every element in A,compare elements in B.
               2)When element in A = element in B, print element.
                   
    Time Complexity : O(m + m*n) = O(n^2).
    
2)For two sorted arrays :
I/p A = {2,5,6,7}
    B = {1,3,4,5,8}
O/p C = {5}

    Approach : 1)Initialise pointer variables i=0 and j=0 to starting indexes of A and B 
               2)Also initialise m as length of A and n as length of B.
               3)While i<m and j<n,
                 3.1)If A[i]<A[j], i++.
                 3.2)If A[i]>A[j],j++.
                 3.3)otherwise , copy A[i] and i++ and j++.
              
                 
    Time Complexity : O(m+n)= O(n+n)= O(n)

*******************************************************************************/
#include <iostream>
using namespace std;
//Function for intersection of sorted arrays
void intersectionSorted(int A[],int B[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            i++;
        }
        else if(A[i]>B[j])
        {
            j++;
        }
        else 
        {
            cout<<A[i]<<" ";
            j++;
        }
    }
}
//Function for intersection of unsorted arrays 
void intersectionUnsorted(int C[],int D[],int x,int y)
{
    // int flag=0;
    for(int j=0;j<y;j++ )
    {
        for(int i=0;i<x;i++)
        {
            if(C[i]==D[j])
            {
                cout<<C[i]<<" ";
            }
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
    
    cout<<"Intersection of Sorted Arrays :\n";
    intersectionSorted(A,B,m,n);
    cout<<"\nIntersection of Unsorted Arrays :\n";
    intersectionUnsorted(C,D,x,y);
    
    

    return 0;
}