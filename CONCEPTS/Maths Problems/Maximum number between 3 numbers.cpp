/******************************************************************************
            MAXIMUM NUMBER BETWEEN 3 NUMBERS
            
Approach :
    Let a,b,c be the three numbers.
    If a>b and a>c then a is greatest number.
    If not, then check if b>c or c>b, whichever is greater will be the greatest number
    
Example :
1) 10 3 7
 if 10>3 and 10>7 then 10 is maximum.

2)2 15 1
 2 not greater than 15 and 2>1.So 2 is not maximum.
 15>1 and 1 is not greater than 15 so 15 is maximum.


*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    //Declaration of variables
    int a,b,c;
    cout<<"Enter the number: "; //to take input from the user
    cin>>a>>b>>c; //to scan the input entered by the user
   
    //to check for various conditions
    if(a>b && a>c)                           //to check whether first number is maximum
    {
        cout<<"Maximum number is "<<a;            //to print first number,if maximum
    }
    else if(b>c)                            //to check whether second number is maximum
    {
        cout<<"Maximum number is "<<b;           //to print second number,if maximum
    }
    else                                    //to check whether third number is maximum
    {
        cout<<"Maximum number is "<<c;         //to print third number,if maximum
    }
    return 0;
}



