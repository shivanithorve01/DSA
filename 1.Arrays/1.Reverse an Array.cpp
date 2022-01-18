/******************************************************************************
                     Reverse an array  

Example : 
 input = [1,3,7,4,2,6] 
 output= [6,2,4,7,3,1]
   
******ITERATIVE APPROACH****** 
1.Declare and initialize variables start=0 and end=length-1
2.While start<end, swap start and end.
3.Change start=start+1 and end=end-1 for the rest of the loop.

Time Complexity : O(n)

******RECURSIVE APPROACH******
1.Declare and initialize variables start=0 and end=length-1
2.When start<end,swap A[start] and A[end].
3.Make a recursive call with start=start+1 and end=end-1 parameters.

Time Complexity : O(n)

*******************************************************************************/
#include <iostream>
using namespace std;

//ITERATIVE APPROACH :
/*void ReverseArray(int A[],int start,int end)  
{
    int temp;
    while(start<end)
    {
        temp = A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
    
}*/
//RECURSIVE APPROACH :
void ReverseArray(int A[],int start,int end)  
{
    int temp;
    if (start>=end)
    return;
    
    temp = A[start];
    A[start]=A[end];
    A[end]=temp;
        
    ReverseArray (A,start+1,end-1);
}

int main()
{
    int A[100];
    int len;
    cout<<"Enter total elements in an array: "<<endl;
    cin>>len;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>A[i];
    }
    cout<<"Array :"<<endl;
    for(int i=0;i<len;i++)           
    {
        cout<<A[i]<<" ";             //Printing original array
    }
    cout<<endl;
    
    ReverseArray(A,0,len-1);         // Function call
    cout<<"Reversed Array :"<<endl;
    for(int i=0;i<len;i++)           
    {
        cout<<A[i]<<" ";            //printing reversed array.
    }
    return 0;
}