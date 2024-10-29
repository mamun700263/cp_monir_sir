#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a;cin>>a;double sum=0,x;
    for(int i=0;i<a;i++){
        cin>>x;
        sum+=x;
        cout<<setprecision(11)<<sum/(i+1)<<nl;
    }
    // cout<<sum/a;
    return 0;
}