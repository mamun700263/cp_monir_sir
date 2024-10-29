#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

bool is_prime(ll num) {
    if (num < 2) return false;
    for (ll i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll z = 9999991;
    vector<bool> all_prime(z + 1, true);
    vector<ll> prim;
    
    all_prime[0] = false;
    all_prime[1] = false;


    for (ll i = 2; i * i <= z; i++) {
        if (all_prime[i]) {
            for (ll j = i * i; j <= z; j += i) {
                all_prime[j] = false;
            }
        }
    }

    ll n;
    cin >> n;

    for (ll i = 2; i <= z; i++) {
        if (all_prime[i]) {
            prim.push_back(i);
        }
    }

    for (ll i : prim) {
        ll k = n + i;

        if (k <= z && all_prime[k]) {
            cout<<"Yes" << nl;
            return 0;
        }
        else if (k > z && is_prime(k)) {
            cout <<"Yes" << nl;
            return 0;
        }
    }
    cout << "No" << nl;
    
    return 0;
}
