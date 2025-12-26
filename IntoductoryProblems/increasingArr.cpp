#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long moves = 0;
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = arr[i-1];
        if(curr<prev){
            moves+=(prev-curr);
            arr[i] = arr[i-1];
        }
    }
    cout<<moves;
    return 0;
}