/******************************************************************************
 Star Pattern : 
 
2) inverted half pyramid    
     * * * *  
     * * * 
     * *
     * 
Approach : 
Here, we have to print (i+1)stars in each row but now start row numbers i.e i from n-1 to 0.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    for(int i=n-1;i>=0;i--)
    {
        //To print (i+1) stars
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

