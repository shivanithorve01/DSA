/******************************************************************************
 Star Pattern : 
 
5) Cross Hollow half pyramid

    j->3 2 1 0
  i
  0          *
  1        * *
  2      *   *
  3    * * * *  

Approach :
for i , 0 to n-1  and j from n-1 to 0.

star is printing at locations
    (0,0), (1,1), (2,2), (3,3) i.e where j==i
    (0,0), (1,0), (2,0), (3,0) i.e where j==0
    (3,3), (3,2), (3,1), (3,0) i.e where i==n-1
    
So here stars are printed when j==0 || j==i || i==n-1
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
        for(int j=n-1;j>=0;j--)
        {
            if(i==n-1 || j==0 || j==i )
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}




