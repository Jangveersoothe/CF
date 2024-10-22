#include<bits/stdc++.h>
using namespace std;

void chad_jango(){
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // Sort cans in increasing order
    sort(v.begin(), v.end());
    
    int a = 0, b = 0;
    for(int i = 0; i < n; i++) {
        // Check if we can collect all k cans with the current set of slots
        if(a + (n - i) * (v[i] - (i == 0 ? 0 : v[i - 1])) >= k) {
            // If so, calculate the remaining presses needed
            b += (k - a);
            break;
        }
        // Otherwise, calculate the presses required for this step
        b += (n - i) * (v[i] - (i == 0 ? 0 : v[i - 1]));
        a += (n - i) * (v[i] - (i == 0 ? 0 : v[i - 1]));
    }
    
    cout << b << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        chad_jango();
    }
    return 0;
}
