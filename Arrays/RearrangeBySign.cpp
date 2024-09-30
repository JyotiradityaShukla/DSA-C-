#include <bits/stdc++.h>

using namespace std;

//Brute force
vector <int> rearrangeBySign(vector <int> arr){
    int n = arr.size();
    vector <int> pos;
    vector <int> neg;
    for(int i = 0; i < n; i++ ){
        if(arr[i] >= 0){
            pos.push_back(arr[i]);
    }
    else{
        neg.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n/2; i++){
        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];

    }
    return arr;
}

//Optimal approach
vector <int> rearrangeArray(vector <int> arr){
    int n = arr.size();
    vector <int> ans (n, 0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            ans[posIndex] = arr[i];
            posIndex += 2;
            }
            else{
                ans[negIndex] = arr[i];
                negIndex += 2;
                }
            }
            return ans;
}

//Varity 2 brute force: when pos != neg
vector<int> RearrangebySign(vector<int>A, int n){

  vector<int> pos;
  vector<int> neg;
  

  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  // If positives are lesser than the negatives.
  if(pos.size() < neg.size()){
      
    // First, fill array alternatively till the point 
    // where positives and negatives ar equal in number.
    for(int i=0;i<pos.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
    }
    
    // Fill the remaining negatives at the end of the array.
    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        
        A[index] = neg[i];
        index++;
    }
  }
  
  // If negatives are lesser than the positives.
  else{
      
      // First, fill array alternatively till the point 
      // where positives and negatives ar equal in number.
      for(int i=0;i<neg.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
    
    // Fill the remaining positives at the end of the array.
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        A[index] = pos[i];
        index++;
    }
  }
  return A;
    
}

int main(){
    vector <int> arr = {1, -2, -3, 4, 5, -6};
    int n = arr.size();
    // vector <int> result = rearrangeBySign(arr);
    vector <int> result = RearrangebySign(arr, n);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
        }
        return 0;
}