#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll getWays(ll k){
    ll tw = (k*k * (k*k-1))/2;
    ll attckw = 4 *(k-1)*(k-2);
    return (tw-attckw);
}
int main(){
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        cout<<getWays(i)<<endl;
    }
    return 0;
}