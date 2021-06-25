#include <bits/stdc++.h>
using namespace std;
int main () {
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);
    long long a, b, c;
    cin >> a >> b >> c;
    if (a == b || c == 0) {
        cout << "=" << endl;
        return 0;
    }
    if (abs(a) == abs(b) && c % 2 == 0){
        cout << "=" << endl;
        return 0;
    }
    if (c % 2 == 0){
        if (abs(a) > abs(b)) {
            cout << ">" << endl;
            return 0;
        }
        cout << "<" << endl;
        return 0;
    }
    if (a >= 0 && b >= 0) {
        if (a > b) {
            cout << ">" << endl;
            return 0;
        }
        if (a == b) {
            cout << "=" << endl;
            return 0;
        }
        cout << "<" << endl;
        return 0;
    }
    if (a < 0 && b < 0) {
        if (a < b) {
            cout << ">" << endl;
            return 0;
        }
        cout << "<" << endl;
        return 0;
    }
    if (a > b) {
        cout << ">" << endl;
        return 0;
    }
    cout << "<" << endl;
}