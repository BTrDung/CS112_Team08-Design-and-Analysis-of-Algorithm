#include <iostream>
#include <map>
using namespace std;
int main () {
    map<long long, long long> cnt; 
    long long n; 
    long long result = 0; 
    cin >> n; 
    for(int i = 1; i <= n; ++i)  { 
        long long x; 
        cin >> x; 
        result = result + (i - 1 - cnt[x]);
        cnt[x] += 1; 
    }
    cout << result;
}