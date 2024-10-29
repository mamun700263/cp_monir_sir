#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    ll z=0;
    while (n--)
    {
        int a,b,c;cin>>a>>b>>c;
        int ans = a+b+c;
        if(ans>1)z++;


    }
    cout<<z;
    
    return 0;
}