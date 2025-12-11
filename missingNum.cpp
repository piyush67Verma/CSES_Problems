#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    ull n;
    cin >> n;
    ull sum1 = 0;
    for(ull i=0; i<n-1; i++){
        ull x ;
        cin>>x;
        sum1 = sum1 + x;
    }

    ull sum2 = 0;
    for(ull i=1; i<=n; i++){
        sum2 = sum2 + i;
    }

    cout<<sum2-sum1;


    return 0;
}