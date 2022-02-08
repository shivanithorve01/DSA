/******************************************************************************
                            GCD AND LCM 
GCD =
Greatest Common Divisor or GCD of two numbers is the maximum possible number 
that perfectly divides (remainder 0) both the numbers togother.

LCM =
Least Common Multiple or LCM of two numbers is the least possible number that is 
a multiple of both the numbers or that has both the numbers as its factors.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num1,num2,gcd=1,lcm=1;
    
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    for(int i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    lcm=(num1*num2)/gcd;
    cout<<"GCD = "<<gcd<<" and LCM = "<<lcm;
    return 0; 
}

