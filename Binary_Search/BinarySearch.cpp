#include  <bits/stdc++.h>

using namespace std;

//Iterative binary search code
int binarySearch(vector <int> arr, int n, int target){
    int low = 0; 
    int high = n - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        
        if ( arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

//Recursive binary search code
int binarySearchRecursive(vector <int> arr, int low, int high, int target){
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == target) return mid;
    else if (target > arr[mid]) return binarySearchRecursive(arr, mid +1, high, target);
    return binarySearchRecursive(arr, low , high - 1, target);
}

int search(vector <int> &arr, int target){
    return binarySearchRecursive(arr, 0, arr.size() - 1 , target);

}