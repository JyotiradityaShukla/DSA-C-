#include <bits/stdc++.h>

using namespace std;

//Brute force
int BuyAndSellStock(vector <int> prices){
    int n = prices.size();
    int maxPro = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(prices[j] > prices[i]);
            maxPro = max(prices[j] - prices[i], maxPro);
        }
    }
    return maxPro;
}

//Optimal approach
int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
}

int main(){
    vector <int> prices = {7,1,5,3,6,4};
    cout << BuyAndSellStock(prices) << endl;
    cout<<maxProfit(prices)<<endl;
    return 0;
}