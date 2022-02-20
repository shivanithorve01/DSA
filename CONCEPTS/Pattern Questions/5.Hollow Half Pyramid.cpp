/******************************************************************************
 Star Pattern : 
 
5) Hollow half pyramid
    *
    * *
    *   * 
    * * * *  
Approach :
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
    for(int i=0;i<n;i++)
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

