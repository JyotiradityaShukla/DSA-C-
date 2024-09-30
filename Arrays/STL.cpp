#include <bits/stdc++.h>
#include <utility>

using namespace std;

void explainPair(){
    pair<int, int> pair1 ={1,2};
    cout<<pair1.first<<endl;
    cout<<pair1.second<<endl;

    pair <int, pair<int,string>> pair2 = {1, {2,"jojo"}};
    cout << pair2.second.second << endl; // prints "jojo"
}

int main() {
    // explainPair();

    // pair<int, pair<int, string>> pair2 = {1, {2, "jojo"}};
    // cout << pair2.second.second << endl; // prints "jojo"

    // pair<int, int>arr[]={{1,2}, {3,4}, {5,6}};
    // cout<<arr[1].second;

    // map<int,int> mpp;
    // mpp[1] = 1;
    // mpp.insert({2,3});
    // cout<<mpp[2];

    
    //print the largest element in array
    
    // int arr[] = {1, 2, 6, 8, 5};
    // sort(begin(arr), end(arr));
    // cout << *(end(arr)-1) << endl;

    
    return 0;
}