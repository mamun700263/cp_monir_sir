#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;cin>>a;
    vector<pair<int,int>>ax;
    vector<double>ans;
    while(a--){
        int x,y;
        cin>>x>>y;
        ax.push_back({x,y});
    }
    for(int i=0 ;i<ax.size();i++){
        for(int j=0;j<ax.size();j++){
            if(j!=i){
                double di = sqrt(((ax[i].first-ax[j].first)*(ax[i].first-ax[j].first))+((ax[i].second-ax[j].second)*(ax[i].second-ax[j].second)));
                ans.push_back(di);
            }
        }
    }
    cout<<setprecision(16)<<*min_element(ans.begin(),ans.end());
    
    return 0;
}