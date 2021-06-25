#include <iostream> 
#include <fstream>
#include <set> 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 

using namespace __gnu_pbds; 
using namespace std; 

void solve()
{ 
    long long n; 
    long long l, r;
    long long f[200005]; 

    cin >> n >> l >> r; 
    for(int i =1; i <= n; ++i)
        cin >> f[i]; 

    tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> tr; 
    long long result = 0; 

    tr.insert(f[1]); 
    for(int i = 2; i <= n; ++i)
    { 
        result = result + (tr.order_of_key((r - f[i]) + 1) - tr.order_of_key(l - f[i])); 
        tr.insert(f[i]);
    }
    cout<<result<<endl;
}
 
int main()
{
   
    int t; 
    cin >> t; 
    for(int i = 1; i <= t; ++i) 
    { 
        solve(); 
    }    
    return 0;
}
