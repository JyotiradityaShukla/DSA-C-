#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Brute force 
vector<int> moveZeros(int n, vector<int> arr) {
    //temporary array:

    vector<int> temp;

    //copy non-zero elements
    //from original -> temp array:
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }

    int nonZero = temp.size();

    for(int i =0; i < nonZero; i++ ){
        arr[i] = temp[i];
    }

    for(int i = nonZero; i < n; i++){
        arr[i] = 0;
    }
    return arr;
}

//Blackbox optimal sol
// vector<int> moveZerosOptimal(int n, vector<int> arr) { 
//     int j = 0; // pointer for non-zero elements
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             swap(arr[i], arr[j]);
//             j++; // increment j only when a non-zero element is found
//         }
//     }
//     return arr;
// }

vector<int> moveZerosOptimal(int n, vector<int> arr) {
    int j = -1; // pointer for non-zero elements
    for (int i = 0; i < n; i++) {
        if(arr[i] == 0){
        j = i;
        break;
        }
    }

if (j == -1) return arr;  //array is at its end 
    
    for(int i = j+1; i<n; i++){  //swap zero with non zero number
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){
    
    vector<int> arr;
    int n;
    cout<< "Enter size: ";
    cin>> n;
    int a;
     for (int i = 0; i < n; i++ ) {
        cin >> a;
        arr.push_back(a);
    }

    vector <int> ans = moveZerosOptimal(n, arr);

    for (auto &it : ans) {
        cout << it << " ";
    }

    return 0;
}