/******************************************************************************
                    SIMPLE INTEREST AND COMPOUND INTEREST
                    
Simple interest is calculated on the principal, or original, amount of a loan.
    FORMULA => 
  
    Simple Interest=P×r×t
        where:
        P=Principal value 
        r=Interest rate
        t=Term/time of the loan

Compound interest is calculated on the principal amount and the accumulated interest of previous periods,
and thus can be regarded as “interest on interest.”
    FORMULA =>
    
    Compound Interest=P((1+r)^t−1)
        where:
        P=Principal
        r=Interest rate in percentage terms
        t=Number of compounding periods for a year

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float p,r,t,simple_interest,compound_interest;
    cout<<"\nEnter the principle amount : ";
    cin>>p;
    cout<<"\nEnter the rate in percent : ";
    cin>>r;
    cout<<"\nEnter the time duration in years : ";
    cin>>t;
    
    simple_interest=(p*r*t)/100;
    compound_interest=(p*pow(1+r/100,t))-p; 
    
    cout<<"\nSimple interest is "<<simple_interest;
    cout<<"\nCompound interest is "<<compound_interest;
    
    return 0;
}




