#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,p,c;cin>>n;
    cin>>p;
    n--;

    while (n--)
    {
        cin>>c;
        // cout<<p<<" "<<c<<nl;
        if(c<p){
            cout<<"No";
            return 0;
        }
        p=c;
    }
    cout<<"Yes";
    
    return 0;
}