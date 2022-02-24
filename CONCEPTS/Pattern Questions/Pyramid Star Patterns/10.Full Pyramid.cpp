/******************************************************************************
 Star Pattern : 
 
 Full pyramid

    j->0 1 2 3 4 5 6 
  i          
  0          *
  1        * * *
  2      * * * * *   
  3    * * * * * * *  

Approach :
    for i , 0 to n-1 and j from 0 to 2(n-1).

star is printing at locations
                          (0,3)                                     j= n-1-i
                    (1,2) (1,3) (1,4)                         j= n-1-i to  j=n-1+i
              (2,1) (2,2) (2,3) (2,4) (2,5)                   j= n-1-i to  j=n-1+i
        (3,0) (3,10 (3,2) (3,3) (3,4) (3,5) (3,6)             j= n-1-i to  j=n-1+i
        
So here stars are printed when j>= n-1-i and j<=n-1+i
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"\nPattern : \n";
    for(int i=0;i<n;i++)
    {
        //To print stars
        for(int j=0;j<2*n;j++)
        {
            if(j>= n-1-i && j<=n-1+i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}






