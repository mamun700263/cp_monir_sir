#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define nl "\n"
using namespace std;

void solve(){
string a;cin>>a;
int n = a.size();
if(n>10)cout<<a[0]<<n-2<<a[n-1]<<nl;
else cout<<a<<nl;


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