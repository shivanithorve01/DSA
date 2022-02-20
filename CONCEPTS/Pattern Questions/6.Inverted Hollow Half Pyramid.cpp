/******************************************************************************
 Star Pattern : 
 
5) Inverted Hollow half pyramid
    * * * *  
    *   * 
    * *
    * 
Approach :
for i , n-1 to 0
here stars are printed when j==0 || j==i || i==n-1

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"\nPattern : \n";
    for(int i=n-1;i>=0;i--)
    {
        //To print stars
        for(int j=0;j<n;j++)
        {
            if(j==0 || j==i || i==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}

