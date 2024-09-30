#include <bits/stdc++.h>

using namespace std;

//Brute force
int AppearOnce(vector <int> arr){
    int n = arr.size();
    for(int i = 0; i< n; i++){
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++){
            if (arr[j] == num){
                count++;
            }

        }
        if (count == 1){
            return num;
        }
    }
}

//Better solution by hash array
int AppearOnceBet(vector <int> arr){
    int n = arr.size();
    int maximum = *max_element(arr.begin(), arr.end()); // initialize maximum correctly
    int hash[maximum + 1] = {0}; // increase the size of the hash array
    for (int i = 0; i < n; i++){
        hash[arr[i]]++;
    }
    for (int i = 1; i <= maximum; i++){ // start the loop from 1
        if (hash[i] == 1){
            return i;
        }
    }
    return -1; // return -1 if no such number is found
}

//Optimal solution - using xor
int AppearOnceOpt(vector <int> arr){
    int n = arr.size();
    int xor1 = 0;
    for (int i = 0; i < n; i++){
        xor1 = xor1 ^ arr[i];
 }
 return xor1;
}

int main (){
    vector <int> arr = {1, 2, 3, 4, 2, 3, 1};
    cout << AppearOnceOpt(arr) << endl;    
    return 0;
}