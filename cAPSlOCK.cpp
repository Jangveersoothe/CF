#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    if (islower(s[1])) {
        cout << s;
        return 0;
    }
    
    if (islower(s[0]) && isupper(s[1])) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
}
