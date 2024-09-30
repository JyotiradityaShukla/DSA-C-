#include <bits/stdc++.h>

using namespace std;

//Brute force - use merge sort

//Better solution
void Sort0s1s2s(vector <int> &arr){

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i < arr.size(); i++){
        
        if(arr[i]==0) cnt0++;
        if(arr[i]==1) cnt1++;
        if(arr[i]==2) cnt2++;

    }

    for(int i = 0; i < cnt0; i++){
        arr[i] = 0;
    }

    for(int i = cnt0; i < cnt0 + cnt1; i++){
        arr[i] = 1;
    }

    for(int i = cnt0 + cnt1; i < arr.size(); i++){
        arr[i] = 2;
    }
}

int main(){

    vector <int> arr = {1, 0, 1, 0, 2, 1, 0, 1, 1, 2};
    Sort0s1s2s(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<< arr[i];
    }
    return 0;
}