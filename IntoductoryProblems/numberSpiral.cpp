#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        ll val;
        if(x>y){
            if(x%2==0){
             val = x*x  - (y-1);
                cout<<val<<endl;
            }
            else{
             val = (x-1)*(x-1) + y;
                cout<<val<<endl;
            }
        }
        else{
            if(y%2==0){
             val = (y-1)*(y-1) + x;
                cout<<val<<endl;
            }
            else{
             val = y*y  - (x-1);
                cout<<val<<endl;
            }
        }
    }

    return 0;

}