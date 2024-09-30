#include <bits/stdc++.h>

using namespace std;

void reverseArr(int i, int arr[], int n){
   
    if(i>n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArr(i+1, arr, n);
}

bool palindrome(int i, string &str){

    if(i>=str.size()/2) return true;
    if(str[i]!=str[str.size() - i -1]) return false;
    return palindrome(i+1, str);

}

int fibonnaci(int n){
    if (n<= 1) return n;
    int last = fibonnaci(n-1);
    int secondLast = fibonnaci(n-2);
    return last + secondLast;
    
}

int main(){

    // int n;
    // cout<< "Enter no. of elements: ";
    // cin>> n;
    // int arr[n];
    // for(int i=0; i<n; i++) {
    //     cout<<"Enter element: ";
    //     cin>> arr[i];
    // }

    //  //int n=sizeof(arr)/sizeof(arr[0]); //Size of array in bytes / size of a single element

    // reverseArr(0,arr, n);
    // for(int i=0; i<n; i++) {
    //     cout<< arr[i] << " ";
    //     }

    // cout<<"Enter value to be checked: ";
    // string str;
    // cin>>str;
    // cout<<palindrome(0, str);

    cout<<"Enter fibonnaci: ";
    int n;
    cin>>n;
    cout<<fibonnaci(n);

    return 0;
}