#include <iostream>
#include <algorithm> //for sort
#include <vector>

using namespace std;

//brute force method to find largest element
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

// Optimal method to find largest element
int largestElement(vector <int> arr, int n){

    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            }
    }

    return max;

}

// Optimal method to find 2nd largest element
int secondLargestElement(vector <int> arr, int n){

    int second = arr[0];
    int max = arr[0];
    int temp;
    
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            temp = max;
            max = arr[i];
            second = temp;
            }

    }

    return second;

}

//Blackbox code: same time complexity as mine
int secondLargestElement2(vector <int> arr, int n){

    int max = arr[0];
    int second;
    
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            second = max;
            max = arr[i];
        } else if(arr[i] > second && arr[i] != max){
            second = arr[i];
        }
    }

    return second;

}

int main(){

    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    

    cout<<largestElement(arr, n );
    cout<<secondLargestElement(arr, n);
}