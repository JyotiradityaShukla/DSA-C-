#include <bits/stdc++.h>

using namespace std;

bool CheckSorted(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] > arr[i+1])
        return false;
    }
    return true;
}

int main(){

    int n;
    cout<<"Enter no. of elments: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin >> arr[i];
    }
    cout<<CheckSorted(arr, n);
}