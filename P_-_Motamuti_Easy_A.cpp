#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a;cin>>a;
    bool prime = true;
    for(ll i=2;i*i<=a;i++){
        if(a%i==0){
            prime = false;break;
        }
    }
    if(prime and a>1)cout<<"Yes";
    else cout<<"No";
    return 0;
}