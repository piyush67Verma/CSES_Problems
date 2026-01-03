#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> gc(int n){
    if(n==1){
        return {"0", "1"};
    }

    vector<string> gcMinusOne = gc(n-1);
    vector<string>res;
    ll m = gcMinusOne.size();
    for(ll i=0; i<m; i++){
        string newgc = "0" + gcMinusOne[i];
        res.push_back(newgc);
    }
    for(ll i=m-1; i>=0; i--){
        string newgc = "1" + gcMinusOne[i];
        res.push_back(newgc);
    }
    return res;
}
int main(){
    int n ;
    cin>>n;
    vector<string>gcs = gc(n);
    ll m = gcs.size();
    for(ll i=0; i<m; i++){
        cout<<gcs[i]<<endl;
    }
    return 0;
}