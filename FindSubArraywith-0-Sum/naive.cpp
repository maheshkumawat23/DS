#include<bits/stdc++.h>
using namespace std;

//Naive method to print all sub Arrays having 0 sum
void printAllSubArrays(int arr[],int n){
  
  //consider all arrays starting from ith element
    
    for(int i=0;i<n;i++){
        //consider all array ending with jth element
		int sum = 0;
        for(int j=i;j<n;j++){
           //sum of elements so far
            sum+=arr[j];
			
			//if sum is seen before print it.
			if(sum==0){
				cout << "Subarray [" << i << ".." << j << "]\n";
			}
        }
    }

}

int main(){

    int arr[] = {8,7,2,5,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);
    printAllSubArrays(arr,n);
    return 0;
}