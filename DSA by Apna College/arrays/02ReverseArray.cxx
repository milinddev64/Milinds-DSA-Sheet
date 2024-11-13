#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr) {
        int temp = 0;
        int l = 0;
        int r = arr.size()-1;

        while (l<=r){
            temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            
            l++;
            r--;
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4};
    reverseArray(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
} 