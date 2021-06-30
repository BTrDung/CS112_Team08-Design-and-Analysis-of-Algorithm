#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
int main () {
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    string res = s; res += '\n';
    while(next_permutation(s.begin(), s.end())){
        res += s;
        res += '\n';
    }
    cout << res;
    return 0;
}