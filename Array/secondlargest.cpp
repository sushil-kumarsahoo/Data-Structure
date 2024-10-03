#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i =1; i<n;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
        
    }
    cout << slargest << endl;
}
int secondSmallest(int arr[], int n){
  int smallest = arr[0];
  int ssmallest = INT_MAX;
  for(int i =1; i < n; i++){
    if(arr[i] < smallest){
        ssmallest = smallest;
        smallest = arr[i];
    }
  
  }
  cout << smallest;
}
int getSecondOrderElements(int n, int arr[]){
    int seclargest = secondLargest(arr, n);
    int secsmallest =secondSmallest(arr, n);
    return  seclargest, secsmallest;
} 


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    getSecondOrderElements(n,arr);
}
