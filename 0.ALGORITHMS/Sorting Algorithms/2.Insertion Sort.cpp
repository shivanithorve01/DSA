/******************************************************************************
                        INSERTION SORTING ALGORITHM
                
Theory :Sort the array using insertion.
         
Example :
         Given  array  = {10,13,6,36,2}
         Required sorted array = {2,6,10,13,36}

Approach :
        1)Start i=0 and j=i+1
        2)Here we will traverse array using i from 0 to n-2.
        3)Now start j=i+1 and check if arr[j]<arr[j-1] if true then swap them otherwise break the loop.
        
    1st pass :     10  13  6   36  2
                    i   j                  arr[j]<arr[j-1] = 13<10 False => break
    2nd pass :     10  13  6   36  2
                        i  j               arr[j]<arr[j-1] = 6<13 True => swap 6 and 13
                   10  6  13   36  2
                    i  j                   arr[j]<arr[j-1] = 6<10 True => swap 6 and 10
    3rd pass :      6   10  13   36  2
                            i    j         arr[j]<arr[j-1] = 36<13 False => break
    4th pass :     6    10   13   36  2
                                   i  j    arr[j]<arr[j-1] = 2<36 True => swap 2 and 36
                                   
                   6    10   13   2   36
                   
        Array is Sorted !!
Time Complexity :
    Best Case      - O(n)   ...(list is already sorted in ascending order)
    Average Case   - O(n*n)
    Worst Case     - O(n*n)   ...(list is already sorted in ascending order)
    
Auxillary Space :  O(1)

Stability : It is stable algorithm since it maintains the order.

Adaptivity :It is adaptive in nature.
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
//FUNCTION TO SWAP ELEMENTS 
void swap(int arr[],int x,int y)
{
    int temp = arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
//INSERTION FUNCTION :
void insertionSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr,j,j-1);
            }
            else
                break;
        }
    }
    printArray(arr,n);
}
//MAIN FUNNCTION :
int main()
{
    int n;
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
	
	cout<<"\nSorted array :";
	insertionSort(arr,n);  //to print sorted array

    return 0;
}
