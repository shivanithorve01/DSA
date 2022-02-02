/******************************************************************************
                INSERTING AN ELEMENT AT SORTED POSITION IN AN ARRAY
                
Theory : we have to insert an element in a sorted array at a sorted position.
         
Example :
         Given sorted array  = {1,6,13,24,36}
         Element to be inserted = 15 (let us call it item)
         Required o/p array = {1,6,13,15,24,36}

Approach :
       1)Start by comparing item from last element of an array. 
       2)If item < element, then shift element to left side.
       3)When item is greater than element,insert item in that position.
       
         Given array is {1,6,13,24,36}
         Start comparing from end of an array i.e 36.
         36 >15,Yes,shift 36 to right ,so array will be {1,6,13,24,blank,36}.compare for next pair.
         24>15,Yes,shift 24 to right ,so array will be {1,6,13,blank,24,36}. 
         13>15,No,So insert 15 at blank position.
         so array will be {1,6,13,15,24,36}
         
         
Time Complexity :
    Best Case      - O(1)   ...(when any shifting is not required i.e item is largest element)
    Average Case   - O(n)
    Worst Case     - O(n)   ...(when item is smallest element)
    
Auxillary Space :  O(1)

*******************************************************************************/
#include <iostream>
using namespace std;
// FUNCTION TO PRINT ARRAY :
void printArray(int arr[],int n)
{
    for (int i=0 ; i<n ; i++)   //To store all the elements
	{
	    cout<<arr[i]<<" ";  
	} 
}
//INSERTION FUNCTION :
void insertElement(int arr[],int n,int item)
{
    for(int i=n;i>0;i--)
    {
        if(arr[i]>item)
        {
           arr[i] = arr[i-1]; 
        }
        else
        {
            arr[i+1]=item;
            break;
        }
    }
    printArray(arr,n);
}
//MAIN FUNNCTION :
int main()
{
    int n,item;
	cout<<"\nEnter total number of elements:";
	cin>>n;
	int arr[100];
	cout<<"\nEnter the elements:";
	for (int i=0 ; i<n ; i++)   //to store all the elements
	{
		cin>>arr[i];  
	}
	cout<<"\nGiven array  :";
	printArray(arr,n);          //to print original array
	
	cout<<"\nEnter the element to be inserted :";
	cin>>item;
	cout<<"\nSorted array :";
	// n+1 becuase array size will increase after 1 insertion.
	insertElement(arr,n+1,item);  //to print sorted array

    return 0;
}



