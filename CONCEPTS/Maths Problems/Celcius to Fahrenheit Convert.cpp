/******************************************************************************
            celcius to fahrenheit convert
            
formula =
    fahrenheit = ((9/5)*celcius)+32

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    //Declaration of variables 
    float cel,ft;
    //To take input from user
    cout<<"Enter the value in celcius: ";
    //To scan input entered by the user
    cin>>cel;
    //formula
    ft=((9.0/5.0)*cel)+32;
    //To display the output
    cout<<"Value in fahrenheit is "<<ft;
    
    return 0;
}

