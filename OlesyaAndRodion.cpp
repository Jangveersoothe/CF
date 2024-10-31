#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    if (t == 10) {
        if (n == 1) {
            cout << "-1" << endl;
        } else {
            cout << "1";
            for (int i = 1; i < n; i++) {
                cout << "0";
            }
            cout << endl;
        }
        return 0;
    }

    if (n == 1) {
        cout << t << endl;
        return 0;
    }

    cout << "1";
    for (int i = 2; i < n; i++) {
        cout << "0";
    }

    int x = 1;
    for (int i = 1; i < n; i++) {
        x = (x * 10) % t;
    }
    
    cout << t - x << endl;

    return 0;
}
