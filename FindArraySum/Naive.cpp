#include<bits/stdc++.h>
using namespace std;

//Naive Method to find a pair in array with given sum
void findPair(int arr[],int n,int sum){
  
  //consider each element except last element
    for(int i=0;i<n-1;i++){
        //start from i element till last element
        for(int j=i+1;j<n;j++){
           //if desired sum found, print it and return
            if(arr[i]+arr[j]==sum){
                cout<<"Pair found at index"<<i <<"and"<<j;
                return;
            }
        }
    }
 // No pair with given sum exists in the array
    cout<<"No pair found";
}

int main(){

    int arr[] = {8,7,2,5,3,1};
    int sum = 10;

    int n = sizeof(arr)/sizeof(arr[0]);
    findPair(arr,n,sum);
    return 0;
}