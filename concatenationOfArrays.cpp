#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long

bool com(const array<ll, 3>& a, const array<ll, 3>& b) {
    return a[0] < b[0];
}

void chad_jango() {
    ll pairs;
    cin >> pairs;

    vector<array<ll, 2>> p(pairs);
    vector<ll> val(2 * pairs);

    for (ll i = 0; i < pairs; i++) {
        cin >> p[i][0] >> p[i][1];
        val[2 * i] = p[i][0];
        val[2 * i + 1] = p[i][1];
    }
    
    sort(val.begin(), val.end());
    map<ll, ll> jango;

    ll j = 1;
    for (ll i = 0; i < 2 * pairs; i++) {
        if (jango.find(val[i]) == jango.end()) {
            jango[val[i]] = j++;
        }
    }

    vector<array<ll, 2>> comp(pairs);
    for (ll i = 0; i < pairs; ++i) {
        comp[i][0] = jango[p[i][0]];
        comp[i][1] = jango[p[i][1]];
    }

    vector<array<ll, 3>> res(pairs);
    for (ll i = 0; i < pairs; ++i) {
        ll sum = comp[i][0] + comp[i][1];
        res[i] = {sum, p[i][0], p[i][1]};
    }

    sort(res.begin(), res.end(), com);

    for (ll i = 0; i < pairs; ++i) {
        cout << res[i][1] << " " << res[i][2] << " ";
    }
    cout << endl;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        chad_jango();
    }
}
