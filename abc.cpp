#include "bits/stdc++.h"
#define MOD 998244353
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        
        ll n; cin>>n;
        
        ll ans=0;
        ll x=5;
        while(n/x>0){
            ans+=n/x;
            x=x*5;
        }

        cout<<ans<<endl;

    }

    return 0;
}