#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 +7;
ll power(ll a, ll b){
    if(b==1)    return a;
    ll res = power(a, b/2)%mod;
    if(b%2==1){
        return (a* ((res * res)%mod))%mod;
    }
    return (res*res)%mod;
}
int main(){
    int n;
    cin>>n;
    
    cout<<power(2, n)<<endl;
    return 0;
}