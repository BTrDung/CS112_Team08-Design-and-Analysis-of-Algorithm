#include <iostream> 
#include <map>
#include <set> 
#include <stack> 
#include <deque> 
#include <vector> 
#include <algorithm>
using namespace std;
void solve() { 
    int n; 
    int result = 0; 
    long long dp[2001][3]; 

    cin >> n; 
    for(int i = 1; i <= n; ++i) { 
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2]; 
        if (dp[i][0] == 1) dp[i][2] *= 10, dp[i][1] *= 10;
        if (dp[i][0] == 2) dp[i][2] = dp[i][2] * 10 - 1, dp[i][1] *= 10;
        if (dp[i][0] == 3) dp[i][1] = dp[i][1] * 10 + 1, dp[i][2] *= 10;
        if (dp[i][0] == 4) dp[i][2] = dp[i][2] * 10 - 1, dp[i][1] = dp[i][1] * 10 + 1; 
        // cout << dp[i][1] << " " << dp[i][2] << endl;
    }

    for(int i = 1; i <= n - 1; ++i) 
        for(int j = i + 1; j <= n; ++j) {
            long long l1 = dp[i][1], r1 = dp[i][2]; 
            long long l2 = dp[j][1], r2 = dp[j][2]; 
            if (l1 <= l2 && l2 <= r1 && r1 <= r2) {
                result += 1;
            }
            else
            if (l2 <= l1 && l1 <= r2 && r2 <= r1)  { 
                result += 1;
            }
            else if (l1 <= l2 && l2 <= r2 && r2 <= r1)  { 
                result += 1;
            }
            else if (l2 <= l1 && l1 <= r1 && r1 <= r2) { 
                result += 1; 
            }
        }
    cout << result << endl;

}

int main(){
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);
    solve();
    return 0;
}