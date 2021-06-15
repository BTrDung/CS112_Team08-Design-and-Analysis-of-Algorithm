#include <iostream> 
#include <fstream>

#include <map>
#include <set> 
#include <stack> 
#include <deque> 
#include <vector> 
#include <algorithm> 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
 
using namespace __gnu_pbds; 
using namespace std; 

tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> tr; 
// .insert() 
// .order_of_key() 

inline void solve()
{ 
    long long n; 
    long long cnt = 0; 
    long long result = 0;
    long long a[400005]; 

    cin >> n; 
    for(int i =1; i <= n; ++i) cin >> a[i]; 
    
    a[0] = 0; 
    a[n + 1] = 0; 
    for(int i = 1; i <= n; ++i) 
    { 
        if (a[i] > max(a[i + 1], a[i - 1])) 
        { 
            cnt = cnt + (a[i] - max(a[i + 1], a[i - 1])); 
            a[i] = max(a[i + 1], a[i - 1]); 
        }
    }
   
    for(int i = 1; i <= n; ++i) 
    { 
        if (a[i] > a[i - 1]) result += (a[i] - a[i - 1]); 
        if (a[i] > a[i + 1]) result += (a[i] - a[i + 1]);
    }
    result = result + cnt;  
    cout << result << endl;
}

int main()
{
   
    int t; 
    cin >> t; 
    for(; t != 0; --t) 
    { 
        solve(); 
    }
    return 0;
}
