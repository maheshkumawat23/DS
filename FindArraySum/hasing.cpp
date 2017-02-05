include<bits/stdc++.h>
using namespace std;


//Function to find a pair in an array with given sum using hashing
void findPair(int arr[],int sum,int n){


//Create an empty map
    unordered_map<int,int> map;

//do for each element
    for(int i=0;i<n;i++){

//check if pair (arr[i],sum-arr[i]) exists

//if difference is seen before, print the pair
        if(map.find(sum-arr[i])!=map.end()){


            cout<<"pair found at "<<map[sum-arr[i]]<<"and "<<i;
            return;
        }
        //store index of current element in the map.
        map[arr[i]]=i;
    }
   // we reach here if pair is not found
    cout << "Pair not found";
}
 
// main function
int main()
{
    int arr[] = { 8, 7, 2, 5, 3, 1};
    int sum = 10;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    findPair(arr, n, sum);
 
    return 0;
}