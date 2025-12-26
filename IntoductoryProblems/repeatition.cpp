#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n  = s.size();
    int ans = 0;
    char last=s[0];
    int len = 1;
    for(int i=1; i<n; i++){
        if(s[i]==last){
            len++;
        }
        else{
            ans = max(ans, len);
            last = s[i];
            len = 1;
        }
    }
    ans = max(ans, len);
    cout<<ans;
    return 0;
}