#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a;cin>>a;
    ll ans = a/5;
    if(a%5!=0)ans++;
    cout<<ans;
    
    return 0;
}