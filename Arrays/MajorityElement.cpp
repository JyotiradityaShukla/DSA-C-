#include <bits/stdc++.h>

using namespace std;

//Brute force
int MajorityElement(vector <int> arr){
    
    int n = arr.size();

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j])
            count++;
        }
    if(count > n/2) return arr[i];
    }
}

//Better solution included maps to store element along with its occurences

// My solution: time complexity is 0(N) which is great but not initializing in leetcode due to size
int MajorityElementBet(vector<int> arr){
    int maxVal = *max_element(arr.begin(), arr.end());
    int hash[maxVal + 1] = {0};

    for(int i = 0; i < arr.size(); i++){
        hash[arr[i]]++;
    }

    for(int i = 0; i <= maxVal; i++){
        if(hash[i] > arr.size()/2) return i;
    }

    return -1; // Return -1 if no majority element is found
}

//Optimal- moore's voting algorithm
int MajorityElementOpt(vector <int> arr){
    int count = 0;
    int el;
    for(int i = 0; i < arr.size(); i++){
        if(count == 0) el = arr[i];
        else if(arr[i] == el) count++;
        else count--;
    }
    int cnt1 = 0;
    for(int  i = 0; i < arr.size(); i++){
        if(arr[i] == el) cnt1++;
    }
    if(cnt1 > arr.size()/2) return el;
    else return -1;
    
}

int main(){

    vector <int> arr = {4,2,4,3,4,3,4,4,4};
    cout<<MajorityElementOpt(arr);
    return 0;
}
