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
  
inline void solve()
{ 
    float a, b; 
    cin >> a >> b;
    cout << (a * b) / 100; 
}
 
int main()
{
   
    int t; 
    // cin >> t; 
    t = 1;
    for(; t != 0; --t) 
    { 
        solve(); 
    }
    return 0;
}
