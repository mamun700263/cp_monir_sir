#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a;cin>>a;
    if(a%4==0 and a%400!=0)cout<<"Yes";
    else cout<<"No";
    
    return 0;
}