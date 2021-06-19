#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long k = (float)((float)(1.08) * (float)(n));

    if (k == 206)
        cout << "so-so";
    else if (k > 206)
        cout << ":(" << endl;
    else
        cout << "Yay!" << endl;
}