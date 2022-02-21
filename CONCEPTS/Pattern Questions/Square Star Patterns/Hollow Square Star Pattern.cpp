/******************************************************************************

Star Pattern : 
 
 Hollow Square Pattern

    * * * *      
    *     *
    *     * 
    * * * * 

Approach :
for i , 0 to n-1
star is printed for i==0, i==n-1, j==0, j==n-1
else print "  "

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
            if (i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"* ";
            else 
                cout<<"  "; 
        }
        cout<<endl;
    }

    return 0;
}

