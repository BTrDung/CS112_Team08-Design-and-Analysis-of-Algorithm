#include <iostream>
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long double a, b, c;
    long double d;
    cin >> a >> b >> c >> d;
    long double cnt = 1, a2 = 0;
    if (a == 0){
        cout << 0 << endl;
        return 0;
    }
    a+=b; a2+=c;
    while (1){
        if (cnt == 10000009){
            break;
        }
        if (a <= d*a2){
            cout << cnt << endl;
            return 0;
        }
        cnt++;
        // cout << a << " " << a2 << endl;
        a+=b;
        a2+=c;
    }
    cout << -1 << endl;
    return 0;
}