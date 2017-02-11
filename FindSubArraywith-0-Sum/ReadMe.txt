Problem : -
Given an array of integers, Check if array contains a sub-array having 0 sum. Also prints, end point of such sub-array.

For example,

Input:  { 4, 2, -3, -1, 0, 4 }

Sub-arrays with 0 sum are

{ -3, -1, 0, 4 }
{ 0 }
 

Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }

Sub-arrays with 0 sum are

{ 3, 4, -7 }
{ 4, -7, 3 }
{ -7, 3, 1, 3 }
{ 3, 1, -4 }
{ 3, 1, 3, 1, -4, -2, -2 }
{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }

Solution -1 (Naive approch)

Consider all sub-array and find its sum. if sub-array sum is equal to 0, print it.

Time Complexity - O(n^2).

