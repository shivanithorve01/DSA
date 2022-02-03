/******************************************************************************
                        SELECTION SORTING ALGORITHM
                
Theory : In each pass it will select a particular position (from 0 to n-1) and find out smallest element
         that should fit in that index.
         
Example :
         Given  array  = {10,13,6,36,2}
         Required sorted array = {2,6,10,13,36}

Approach :
        1)Start i=0 ,j=i and k=i.
        2)Here we will traverse array using i from 0 to n-1.
        3)Start j and k from i and using j traverse the array to find smallest element 
        4)When smallest element is found then bring k to that position and continue the comparisons for rest of 
        the elements.
        5)After traversing entire array swap arr[i] with smallest element found at kth position.
        
        
    1st pass :     10       13      6       36      2
                 i,j,k      
                   i,k      j                           since arr[j]<arr[k] = 13<10 False => do not change k 
                   i                k,j                 since arr[j]<arr[k] = 6<13 True => Bring k to j
                   i                k        j          since arr[j]<arr[k] = 36<6 False => do not change k 
                   i                                k,j since arr[j]<arr[k] = 2<6 True => Bring k to j
                   2        13      6       36      10  arr[k] and arr[i] is swapped.
                   Hence after 1st pass we get 1st sorted (smallest) element in an array.
                   Repeating similar procedure for rest of the passes we get,
    2nd pass :     2       6      13       36      10
                   Hence after 2nd pass we get 2nd sorted (smallest) element in an array.                 
    3rd pass :     2       6      10       36      13
                   Hence after 3rd pass we get 3rd sorted (smallest) element in an array.                 
    4th pass :     2       6      10       13      36
                   Hence after 4th pass we get 4th sorted (smallest) element in an array.
                   and last element thus get sorted automatically.
                   
        Array is Sorted !!
        
No. of Comparisons = 
    1+2+3+4...n-1 = n(n-1)/2 = O(n*n)
    
No of Swaps = 1+1+1+1...+n-1 = O(n)

K passes = k smallest element will be found.

Time Complexity :
    Best Case      - O(n*n)
    Average Case   - O(n*n)
    Worst Case     - O(n*n)
    
Auxillary Space :  O(1)

Stability : It is not stable algorithm since it does not maintain the order.

Adaptivity :It is not adaptive as we cannot find if list is already sorted or not.
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
//SELECTION SORT FUNCTION :
void selectionSort(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++) //n-1 because last element will automatically get sorted.
    {
        for(j=i;j<n;j++) // j should traverse whole array from i.
        {
            k=i;
            if(arr[j]<arr[k])
            {
                k=j;  // k should be bring to j
            }
            swap(arr,i,k);
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
	selectionSort(arr,n);  //to print sorted array

    return 0;
}


