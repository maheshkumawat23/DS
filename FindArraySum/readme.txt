Problem : - Given an unsorted array of integers, find a pair with given sum in it.

For eg.

Input : 

arr = [8,7,2,5,3,1]

sum = 10;

Output :

Pair found at index 0 and 2 (8+2)

OR

Pair found at index 1 and 5 (7+3)

--------------------------------------------------------------------------------------------------------

Solution -1 : Naive solution 

Naive solution would be consider every pair in given array and return if desired sum is found.

Time Complexity = O(n^2)
space used = O(1).


Solution -2 : sorting -> for explanation see the code

Time Complexity = O(nlogn)

space used = O(1);
