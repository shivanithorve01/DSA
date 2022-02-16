/******************************************************************************

Problem Statement : Difference between sum of major and minor diagonal elements in 2D array 

Example :
Input : m[4][4] = { { 1,2,3,4},
                    {10,20,30,40},
                    {100,200,300,400},
                    {1000,2000,3000,4000} }
Output : 3087

Explaination :
Sum of major diagonal = 4(0,3) + 30(1,2) + 200(2,1) + 1000(3,0) = 1234       condn => i=n-1-j
Sum of minor diagonal = 1(0,0) + 20(1,1) + 300(2,2) + 4000(3,3) = 4321    ...condn => i==j
Difference = |4321 - 1234| = 3087.


*******************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;
void display();
int m,n,i,j;
int A[100][100];  //global declarations 

int Difference(int A[][100],int m,int n) 
{
    int d1=0,d2=0;
    for (int i = 0; i < m; i++)
    {
        for (int j= 0; j < n; j++)
        {
          if (i==j)
            {
              d1 += A[i][j];   // sum of major diagonal
            }
          if(i== n-j-1)
            {
              d2 += A[i][j];  // sum of minor diagonal
            }  
        }
    }
    return abs(d1-d2);
}

int main()
{
    cout<<"Enter no. of rows :";
    cin>>m;
    cout<<"Enter no. of columns :";
    cin>>n;
    
    cout<<"Enter elements of matrix :"; //to scan matrix elements 
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"\nMatrix :\n"; //to print matrix
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    } 
   cout<<"\nDifference of sum of major and minor diagonal is : "<<Difference(A,m,n);
    return 0;
}

