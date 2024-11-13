#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(vector<long long int> arr) {
        pair<long long, long long> p;
        p.first = arr[0];
        p.second = arr[0];
        int i = 0;
        while(i<arr.size()){
            if(p.first>arr[i]) 
            p.first = arr[i];
            if(p.first<arr[i]) 
            p.second = arr[i];
            i++;
        }
        return p;  
    }


int main(){
    vector<long long int> arr = {1, 2, 3, 4};
    pair<long long, long long> p;
    p = getMinMax(arr);
    cout<<p.first<<" "<<p.second;
}