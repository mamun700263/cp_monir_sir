#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a;cin>>a;
    for(int i=1;i<=a;i++){
        double r;cin>>r;
        double area_of_rec = (4*r)*(2*r);
        double area_of_cir = 3.1416*r*r;
        double ans = area_of_rec-2*area_of_cir;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<ans<<nl;
    }
    
    return 0;
}