#include <bits/stdc++.h>

using namespace std;

//Brute force 
int FindMissing(vector <int> arr){
    int n = arr.size();

    for (int i = 1; i<=n + 1; i++){
            int flag = 0;
        for(int j = 0; j < n; j++ ){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
        return i;
        }
    }
}

//Better solution
int FindMissingBetter(vector <int> arr){
    
    int n = arr.size();
    int Hash[n + 1] = {0};
    for (int i = 0; i<n; i++){
        Hash[arr[i]] = 1;
    }
    for (int i = 1; i<= n; i++){
        if(Hash[i] == 0){
            return i;
        }
    }
}

//Optimal SOlution 1 -> sum

int FindMissingOpt(vector <int> &arr){
    int n = arr.size();
    int Reqsum = 0;
    int givenSum = 0;
    for(int i = 1; i<=n+1; i++){  //could also have used formula n*(n+1)/2
        Reqsum += i;
    }
for (int i = 0; i < n; i++) { // Changed from i <= n to i < n to avoid out-of-bounds access
        givenSum += arr[i];
    }
    return Reqsum - givenSum;
    }

//Optimal solution 2 -> XOR method
int FindMissingOpt2(vector <int> &arr){
    int N = arr.size();
    int xor1 = 0, xor2 = 0;
    int n = N+1; 
    for (int i = 1; i <= n; i++){
        xor1 = xor1 ^ i; 
    }
    for (int i = 0; i < N; i++){
        xor2 = xor2 ^ arr[i]; 
    }
    return xor1 ^ xor2; 
}

int main(){
    vector <int> array = {1, 2, 4, 5};
    cout << FindMissingOpt2(array) << endl;
    return 0;
}