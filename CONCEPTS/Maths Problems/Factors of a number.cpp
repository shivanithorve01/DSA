/******************************************************************************
                    FACTORS OF A NUMBER. 
                    
Theory : Factor of any given number is a number which divides a given number completly.

Example : 
1) factors of 12 : 1,2,3,4,6,12.
2) factors of 25 : 1,5,25.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{

  int num;                                  //DECLARATION OF VARIABLES

  cout<<"Enter number: ";                   //TO GET INPUT FROM THE USER
  cin>>num;                                 //TO SCAN NUMBERS ENTERED BY THE USER

  cout<<"Factors of "<<num<<" are:\n";   

  for(int i=1; i<=num/2; i++)               
  {
    if(num%i==0)                            //TO FIND FACTORS OF THE NUMBER
        cout<<i<<" ";                       // TO PRINT THE FACTORS
  }
  cout<<num;
  return 0;
}

