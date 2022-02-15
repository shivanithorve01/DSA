/******************************************************************************
                        FIBONACCI SERIES 

The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation 
Fn = Fn-1 + Fn-2
with seed values  F0 = 0 and F1 = 1.


*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n0=0,n1=1,n2,n,i;                       // declaration of variables
    cout<<"Enter the number of elements(should be > 2) : ";  // to get number of elements from the user
    cin>>n;                                  // to scan the number of elements in the series
    cout<<"Fibonacci series will be : ";  
    cout<<n0<<" "<<n1<<" ";                          // to print 0 and 1

    for(i=0;i<n-2;i++)                         // for loop to print rest of the series
    {
        n2=n0+n1;                              // to get next element in the series
        cout<<n2<<" ";
        n0=n1;                                // to update the first number
        n1=n2;                                //to update the second number
    }
    return 0;
}



