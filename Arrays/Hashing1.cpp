#include <bits/stdc++.h>


using namespace std;

//Number hashing

// int main(){

//     int n;
//     cout<<"Enter no. of elements: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout<<"Enter element: ";
//         cin >> arr[i];
//     }

//     //Pre-compute

//     int hash[13]={0};
//     for(int i=0; i<n; i++){
//         hash[arr[i]]++;
//     }

//     int q;
//     cout<<"Enter no. of queries: ";
//     cin>> q;   //no. of queries, no. of elements to be searched
//     while(q--){
//         int number;
//         cout<<"Enter no. to be searched: ";
//         cin>>number;
//         //fetch
//         cout<<hash[number]<<endl;
//     }

//     return 0;
// }

//for numbers more than 10^7

int main(){

    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element: ";
        cin >> arr[i];
    }

    //Pre-compute

    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

        for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    int q;
    cout<<"Enter no. of queries: ";
    cin>> q;   //no. of queries, no. of elements to be searched
    while(q--){
        int number;
        cout<<"Enter no. to be searched: ";
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }

    return 0;
}