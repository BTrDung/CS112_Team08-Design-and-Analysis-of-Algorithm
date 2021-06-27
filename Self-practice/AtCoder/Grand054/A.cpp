#include <iostream> 
#include <algorithm> 
using namespace std;
int main() {
    freopen("DEBUG.INP","r",stdin);
    freopen("DEBUG.OUT","w",stdout);
    
    long long n; 
    string s; 
    cin >> n; 
    cin >> s;
    
    if (s[0] != s[s.size() - 1]) { 
        cout << 1 << endl; 
        return 0;
    }

    for(int i = 1; i < s.size() - 1; ++i) { 
        char a = s[0]; 
        char b = s[i]; 
        char c = s[i + 1]; 
        char d = s[s.size() - 1];

        if (a != b && c != d) 
        { 
            cout << 2 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}