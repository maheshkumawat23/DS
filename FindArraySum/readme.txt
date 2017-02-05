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


Solution - 3: Hashing 

We can use Map to easily solve this problem in linear time. The idea is to insert
each element of the arr[i] in a map. We also checks if difference (arr[i],sum-arr[i]) already exists in the map
or not. if the difference is seen before, we print the pair and return.

Time Complexity :- O(n).


Space used : O(n);























