#include <bits/stdc++.h>

using namespace std;

// Floor = largest no. <= x
int floor(vector<int> arr, int x, int n) {
    int ans = -1; // incase no answer is available
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x) {
            ans = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Ceiling = smallest no. >= x
int ceiling(vector<int> arr, int x, int n) {
    int ans = -1; // incase no answer is available
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x) {
            low = mid + 1;
        } else {
            ans = arr[mid];
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int n = arr.size();
    int x = 35; // given number
    cout << "Floor: " << floor(arr, x, n) << endl;
    cout << "Ceiling: " << ceiling(arr, x, n) << endl;
    return 0;
}