/******************************************************************************
TOWER OF HANOI 

PROBLEM STATEMENT : 
It is a problem where 3 rods are given and there is stack of n disks in one rod where disks are 
sorted based on their size.We need to move these disks from one rod to another rod using the auxillary rod by obeying 
certain rules -
1. No bigger disk should be placed over smaller disk.
2. You can move only one disk at a same time.
3. Uppermost disk in a rod can be moved only and not middle ones.

EXAMPLE :

No of rods = 3 (fixed) let it be rods - A,B,C.
No of Disks = 2

Step 1 : Move first disk from rod 'A' to 'B'.
Step 2 : Move second disk from rod 'A' to 'C'.
Step 3 : Move first disk from rod 'B' to 'C'.

The approach here is :
Move 'n-1' disks from rod A to B.
Move last disk from rod A to C.
Move 'n-1' disks from rod B to C.

OUTPUT FOR 2 DISKS :
Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C

*******************************************************************************/
#include <iostream>
using namespace std;

// A = Start Rod , B = Auxillary Rod, C = Destination Rod

void TOH(int n, char A, char B, char C) 
{
    if(n>0) 
    {
        TOH(n-1,A,C,B);    
        cout<<"\tMove disk "<<n<<" from rod "<<A<<" to rod "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}
int main ()
{
    int num = 0;
    char A,B,C;
    cout<<"\tEnter the number of disks :"<<endl;
    cin>>num;
    cout<<"\tFollow these steps :"<<endl;
    TOH(num,'A','B','C'); 
    return 0;
    
}
//This code is contributed by Shivani Thorve