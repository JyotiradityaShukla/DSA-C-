#include <bits/stdc++.h>

using namespace std;

int maxConsOnes(vector <int> arr){
    int n = arr.size();
    int maxCount = 0, currentCount = 0;
    for(int i = 0; i < n; i++ ){
        if(arr[i] == 1){
            currentCount++;
            if(currentCount > maxCount){
                maxCount = currentCount;
            }
        }
        else{
            currentCount = 0;
        }
    }
    return maxCount;
}

int main(){
    vector <int> arr = {1,1,0,1,1,1,0,1,1};
    cout << maxConsOnes(arr);
    return 0;
}