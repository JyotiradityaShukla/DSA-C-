#include <bits/stdc++.h>

using namespace std;

int countDigits(int n){

    // int count=0;

    // while( n > 0 ){

    //     n=n/10;
    //     count++;

    // }
    // cout<<count;
    // return count;

    // By logarithmic time complexity

    int cnt= (int)(log10(n) + 1 );
    cout<<cnt;
    return cnt;
}

int reverse(int n){

    int newDigit=0;

    while(n > 0){
        int rem = n%10;
        newDigit = newDigit*10 + rem;
        n = n/10;
    }

    // cout<<newDigit;
    return newDigit;
}

bool palindrome(int n){

    int original=n;
    int newDigit=0;

    while(n > 0){
        int rem = n%10;
        newDigit = newDigit*10 + rem;
        n = n/10;
    }
    if (original==newDigit){
        return true;
    }
    else{
        return false;
    }
    
}

bool Armstrong(int n){
    int original = n;
    int newDigit = 0;
    int count = 0;
    int temp = n;

    while(temp > 0){
        temp = temp/10;
        count++;
    }

    temp = n;
    while(temp > 0){
        int rem = temp%10;
        newDigit = newDigit + pow(rem, count) ;
        temp = temp/10;
    }
    
    if (original == newDigit){
        return true;
    }
    else{
        return false;
    }
}


void printDivisor(int n){

    vector<int> ls;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls)cout<< it<<" ";

}

bool prime(int n){

    int count=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            count++;
    }
    if(count>1){
        return false;
        }
    }
}

int HCF(int n, int m){
    int hcf = 1;
    for(int i=1; i<=n && i<=m; i++ ){
        if(n%i==0 && m%i==0){
            hcf = i;
        }
    }
    return hcf;
}

int main(){

    int num, num2;
    printf("Enter 1st number: ");
    scanf("%d", &num);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    // countDigits(num);

    // cout<<reverse(num);

    // if(palindrome(num)==true){
    //     cout<<"Palindrome";
    // }
    // else{
    //     cout<<"Not a palindrome";
    // }

    // if(Armstrong(num)==true){
    //     cout<<"Armstrong";
    // }
    // else{
    //     cout<<"Not Armstrong";
    // }

    //printDivisor(num);

    // if(prime(num)==true){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not Prime";
    // }

    cout<<HCF(num, num2);
    return 0;
}