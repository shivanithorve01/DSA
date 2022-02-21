/******************************************************************************
 Star Pattern : 
 
4) cross inverted half pyramid    
     * * * *  
       * * * 
         * *
           * 
Approach : 
Here, we have to print (i+1)stars in each row but first we have some spaces.
  for i , n-1 to 0
for i=3 , 0 spaces followed by 4 stars.
for i=2 , 1 spaces followed by 3 stars.
for i=1 , 2 space followed by 2 stars.
for i=0 , 3 spaces followed by 1 star.

So, stars = i+1 and print stars for j>= n-1-i

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
        //To print i+1 stars
        for(int j=0;j<n;j++)
        {
            if(j>=n-1-i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
