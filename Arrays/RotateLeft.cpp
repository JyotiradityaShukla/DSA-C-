#include <bits/stdc++.h>

using namespace std;

// Left rotate an array by 1 place
void rotateOne(int arr[], int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];

    }
    arr[n-1] = temp;
    
}

// Brute approach to rotate an array by D places
void rotateBruteD(int arr[], int n, int d) {
    d = d % n; // handle cases where d > n
    vector<int> temp(arr, arr + n); // create a copy of the original array

    // rotate the array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[(i + n - d) % n];
    }
}

//Optimal method 
// Function to reverse an array

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//function to rotate
void rotateLeft(int arr[], int n, int d) {
    d = d % n; // handle cases where d > n
    reverse(arr, 0, n - 1); // reverse the entire array
    reverse(arr, 0, n - d - 1); // reverse the first n-d elements
    reverse(arr, n - d, n - 1); // reverse the rest of the array
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    // rotateOne(arr, n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    rotateLeft(arr, n, 3);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        }
        return 0;
}

