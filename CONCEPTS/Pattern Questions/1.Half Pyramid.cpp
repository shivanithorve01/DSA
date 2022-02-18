/******************************************************************************
 Star Pattern : 
 
1) half Pyramid             
     *                              
     * *                         
     * * *                       
     * * * *
Approach : 
Here, each row is having stars equal to row number.So we have to print (i+1)stars in each row

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    for(int i=0;i<n;i++)
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
