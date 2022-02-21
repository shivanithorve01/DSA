/******************************************************************************

Star Pattern : 
 
 Square Pattern

    * * * *      
    * * * *
    * * * * 
    * * * * 

Approach :
for i , 0 to n-1
star is printed for all values of i and j

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
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

