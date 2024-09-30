#include <bits/stdc++.h>

using namespace std;

//Brute force
pair <int, int> twoSum(vector <int> arr, int k){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = i ; j < n; j++){
            if(arr[i] + arr[j] == k){
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

//Better solution
vector<int> twoSumBet(int n, vector<int> &arr, int k) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int needed = k - num;
        if (mpp.find(needed) != mpp.end()) {
            return {mpp[needed], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
}

//Optimal solution - only if array is sorted
vector<int> twoSumOpt(int n, vector<int> &arr, int k) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        if(arr[i] + arr[j] == k) return {i, j};
        else if(arr[i] + arr[j] < k) i++;
        else j--;
    }
}

int main(){
    vector <int> arr = {2, 6, 5, 8, 11};
    int k = 14;
    int n = arr.size();
    pair<int, int> result = twoSum(arr, k);
    cout << "(" << result.first << ", " << result.second << ")" << endl;
  vector<int> ans = twoSumBet(n, arr, k);
    cout << "["<<ans[0] << ", "
         << ans[1] << "]" << endl;
         vector<int> ans2 = twoSumOpt(n, arr, k);
         cout << "["<<ans2[0] << ", "<< ans2[1] << "]" << endl;
    return 0;
}