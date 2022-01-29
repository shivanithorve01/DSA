"# DSA" 
This reposiratory contains Solutions for 450 DSA Questions from Love Babbar's DSA Sheet.

Approaches used by different problems are given here in short -

1.Reverse Array : 
2.Max and Min element in an array with min comparisons : 
  	Approach 1 = Linear Search 
  	Approach 2 = Tournament Method (Divide & Conquer)
  	Best Approach = Comparing in Pairs (if n=odd,max=min=A[0] and then compare in pairs.If n=even,compare max and min 			for adjacent elements starting from 0 and 1)
3.Kth Smallest Element :
  	Approach 1 = Sort the array (Merge Sort) and kth smallest = A[k+1]
  	Best Approach = Using Heap
4.Sort array of 0,1 and 2 :
  	Approach 1 = Counting Method
  	Best Approach = DNF Sorting
5.Move all negative numbers to one side of an array : 
  	Approach 1 = Swapping (Simple)
	Approach 2 = 2 Pointer Method.
6.Union of 2 arrays :
	Approach 1 = Merging using 2 Pointer 
	Approach 2 = sets 
	Approach 3 = maps.
7.Intersection of 2 Arrays :
	Approach 1 = 2 Pointer like merging
	Approach 2 = Brute Force 
	Approach 3 = Hashmaps
	Approach 4 = Sorting.
8.Cyclic Rotation of an Array :
	Approach 1 = Shifting 
	Approach 2 = 2 Pointer 
9.Largest Sum of Contiguous Subarray : (find subarray whose sum is max)
	Approach 1 = Brute force using 2 nested for loops
	Best Approach = Kadane's Algorithm
10.Minimum no of jumps to reach an end of an array :
	Approach 1 = DP Approach
	Best Approach = Greedy Approach
11.Minimize the maximum difference between the heights :
	Approach = Brute Force Recursion
	Best Approach = Greedy Algorithm
12.Two repeating elements in an array
	Best Approach = Using auxillary array to store count of repeated elements
13.Rearrange an array such that arr[i] becomes arr[arr[i]] :
	Approach : Using arr[i]= a+b*n trick
14.Duplicates in an array :
	Approach 1 = Sorting 
	Approach 2 = HashMap
	Best Approach = LinkedList Cycle(Tortoise 2 pointer) Method 

  