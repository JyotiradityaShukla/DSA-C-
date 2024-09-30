#include <bits/stdc++.h>

using namespace std;

//Lower Bound
int mylowerBound(vector <int> arr, int n, int x ){
    int low = 0, high = n - 1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

//Upper bound
int myUpperBound(vector <int> arr, int n, int x ){
    int low = 0, high = n - 1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){

    vector <int> arr = {1, 2, 3, 4, 5, 7, 8, 9, 9, 9, 11};
    int n = arr.size();
    int target = 2;
    
    // Custom lower_bound implementation
    cout << "Custom lower bound: " << mylowerBound(arr, n, target) << endl;

    //Custom upper bound implementation
    cout << "Custom lower bound: " << myUpperBound(arr, n, 11) << endl;
    
    // Standard lower_bound function
    auto lb = std::lower_bound(arr.begin(), arr.end(), target);
    cout << "std::lower_bound index: " << lb - arr.begin() << endl;
    
    return 0;
}
