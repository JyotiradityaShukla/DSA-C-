#include <bits/stdc++.h>

using namespace std;

//Brute force
vector <int> findIntersection(vector <int> &a, int n1, vector <int> &b, int n2)
{
    vector <int> Intersection;
    int vis[n2] = {0};
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){

            if(a[i] == b[j] && vis[j] ==  0){
                Intersection.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i]);

        }


    }
    return Intersection;

}

vector <int> findIntersectionOpt(
    vector <int> &a, int n1, vector <int> &b, int n2){
        vector <int> Intersection;
        int i = 0;
        int j = 0;
        while (i < n1 && j < n2){
            if(a[i] != b[j]){
                i++;
        }
        else{
            Intersection.push_back(a[i]);
            i++;
            j++;
        }

    }
        return Intersection;
}


int main(){
    vector <int> arr1 = {1 , 2, 2, 3, 3, 4, 5, 6};
    vector <int> arr2 = {2, 3, 3, 5, 6, 6, 7};
    vector <int> ans = findIntersectionOpt(arr1, arr1.size(), arr2, arr2.size());
    for(auto it: ans){
        cout << it << " ";
    }
    return 0;
}