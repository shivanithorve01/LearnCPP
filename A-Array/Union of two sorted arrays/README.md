### UNION OF TWO SORTED ARRAYS 

Union of two arrays: Set of all elements present in both arrays without repeating any element. 
 

**Example :**  

For two sorted arrays : 
I/p A = {-2,3,5,7} 
    B = {0,2,4,8,9} 
O/p C = {-2,0,2,3,4,5,7,8,9} 


**APPROACH : Merge all elements of A and B by taking common element once.** 

**Steps :**

1. Initialise pointer variables i and j to starting indexes of A and B 
2. Also initialise m as length of A and n as length of B.
3. While i<m and j<n,
	3.1. If A[i]<A[j],copy A[i] and i++.
	3.2. If A[i]>A[j],copy A[j] and j++.
	3.3. Otherwise , copy A[i] and i++ and j++.

**Time Complexity** 

O(m+n)= O(n+n)= O(n) 

**Space Complexity** 

No extra space is used.   
Space Complexity : O(1) 

### OUTPUT : 

![image](https://user-images.githubusercontent.com/81226536/163536470-3971f593-6a1a-4be1-9461-b7e4c3981457.png)