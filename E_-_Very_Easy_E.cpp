#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll f=0,s=1,t=f+s;
    if(n==1){
        t = f;
    }else if(n==2){
        t=s;
    }else{
        while (n>=2)
    {
        // cout<<t<<" ";
        t=f+s;
        f=s;
        s=t;
        n--;
    }
    }
    
    cout<<t;
    return 0;
}