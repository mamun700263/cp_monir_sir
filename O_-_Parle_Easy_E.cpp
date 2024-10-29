#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define nl "\n"
using namespace std;

void solve(){
ll a,b;
cin>>a>>b;
ll ans=0;
if(a%b==0)ans=0;
else if(a<b)ans = b-a;
else if(a>b){
    ll k = a/b;
    k++;
    ans = b*k - a;
}
cout<<ans<<nl;

}

void tc();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tc();
    // solve();
    
    return 0;
}



void tc(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
}