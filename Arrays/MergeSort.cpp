#include <iostream>
#include <vector>

using namespace std;

void merge(vector <int> &arr, int low, int mid, int high){
    vector <int> temp;

    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if (arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;

        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
        }
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
            }

                // Copy the sorted elements back to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}


void mergeSort(vector <int> &arr, int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){

    int array[] = {1,2,6,4,6,7,3};

    vector<int> arr(array, array + 7); // Convert the array to a vector

    mergeSort(arr, 0, 6);

    // Print the sorted array
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}