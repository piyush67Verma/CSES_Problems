#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    ll ts = (1LL* n * (n+1))/2;
    if(ts%2==1){
        cout<<"NO"<<endl;
    }
    else{
        ll s = ts/2;
        set<int>st1;
        set<int>st2;
        for(int i=n; i>=1; i--){
            if(i<=s){
                st1.insert(i);
                s-=i;
            }
            else{
                st2.insert(i);
            }
        }

        cout<<"YES"<<endl;
        cout<<st1.size()<<endl;
        for(int ele: st1){
            cout<<ele<<" ";
        }
        cout<<endl;
        cout<<st2.size()<<endl;
        for(int ele: st2){
            cout<<ele<<" ";
        }
    }
    return 0;
}