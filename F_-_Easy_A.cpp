#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    cout<<(n*(n+1)/2)%MOD<<" ";
    ll pp=1;
    for(ll i=0;i<n;i++){
        pp =( pp*n)%MOD;
    }
    cout<<pp<<" ";

    
    ll fac=1;
    for(ll i=1;i<=n;i++){
        fac = (fac*i)%MOD;
    }
    cout<<fac<<" ";

    
    ll two=1,three=1,ans=0;
    for(ll i=0;i<n;i++){
        two=(two*2)%MOD;
        three=(three*3)%MOD;
        ans=(two+three)%MOD;
    }
    cout<<ans;

    

    return 0;
}