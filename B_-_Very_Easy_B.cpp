#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;








int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;cin>>a;
    string x = to_string(a);
    reverse(x.begin(),x.end());
    int n=x.size();
    for(int i=1;i<=n;i++){
        cout<<x[n-i];
        if((n-i)%3==0 and i<n)cout<<',';
    }
    
    return 0;
}