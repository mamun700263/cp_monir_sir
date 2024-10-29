#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;cin>>a;
    stack<char>st;
    for(char i:a){
        if(i=='(' or i=='[' or i=='{')st.push(i);
        else if(!st.empty()){
            if(i==')' and  st.top()=='(')st.pop();
            else if(i==']' and st.top()=='[')st.pop();
            else if(i=='}' and st.top()=='{')st.pop();
            else {
                cout<<"No";return 0;
            }
        }else{
            cout<<"No";return 0;
        }
    }
    if(st.empty())cout<<"Yes";
    else cout<<"No";
    return 0;
}