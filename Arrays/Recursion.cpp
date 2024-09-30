#include <bits/stdc++.h>

using namespace std;

void printName(int i, int n){
    if(i > n) return;
    cout << "Jyotiraditya " << endl;
    i++;
    printName(i, n);
}

void printLinear(int i, int n){
    if(i > n) return;
    cout << i << endl;
    i++;
    printLinear(i, n);
}

void printRev(int i, int n){
    if(i > n) return;
    cout << n << endl;
    n--;
    printRev(i, n);
}

void backtracking(int i, int n){

    if(i < 1) return;
    
    backtracking(i-1, n);
    cout << i << endl;
}

void backtrackingFront(int i, int n){

    if(i < 1) return;
     cout << i << endl;
    backtrackingFront(i-1, n);
   
}

int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}

int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}

int main(){

    int n;
    
    cout<<"Enter no: ";
    
    cin >> n;

    // printName(1, n);

    // printLinear(1, n);

    //printRev(1, n);

    //backtracking(n, n);

    //backtrackingFront(n, n);

    //cout<< sum(n);

    cout<< factorial(n);
    return 0;
}