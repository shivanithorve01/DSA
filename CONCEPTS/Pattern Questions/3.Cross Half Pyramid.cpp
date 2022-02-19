/******************************************************************************
 Star Pattern : 
 
3) cross half pyramid   
           *                            
         * *                         
       * * *              
     * * * *  

Approach : 
Here, we have to print (i+1)stars in each row but first we have some spaces.
  for i , 0 to n-1
for i=0 , 3 spaces followed by 1 star.
for i=1 , 2 spaces followed by 2 stars.
for i=2 , 1 space followed by 3 stars.
for i=3 , 0 spaces followed by 4 stars.

So, stars = i+1 and print stars for j>= n-1-i

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
        for(int j=0;j<n;j++)
        {
            if(j >= n-1-i)
                cout<<"* ";
            else 
                cout<<"  ";
            
        }
        cout<<endl;
    }

    return 0;
}



