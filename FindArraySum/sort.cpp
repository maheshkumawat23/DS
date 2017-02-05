include<bits/stdc++.h>
using namespace std;

//Function to find a pair in an arry with given sum using sorting
void findPair(int arr,int n,int sum){

    //sort the array in ascending order
    sort(arr,arr+n);


  //Maintain two indexes pointing to end points of the array
    int low = 0;
    int hight = n-1;

    //reduce search space arr[low....high] at each iteration of the loop

    //loop till low is less than high

    while(low<high){
       //sum found
        if(arr[low]+arr[high]==sum){
            cout<<"Pair found at index"<<low <<"and"<<high;
            return;
        }

        //increment low index if total is less than desired sum;
        //decrement high index if total is less than desired sum;
        (arr[low]+arr[high]<sum)?low++:high--;
    }
    cout<<"No pair found in the array"
}

int main(){

    int arr[] = {8,7,2,5,3,1};
    int sum = 10;

    int n = sizeof(arr)/sizeof(arr[0]);
    findPair(arr,n,sum);
    return 0;
}