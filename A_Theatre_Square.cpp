#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define nl '\n'
#define ll long long
using namespace std;

int main()
{
    Naba;

    ll n,m,a;
    cin >> n >> m >> a;
    
    cout << ((n+a-1)/a) * ((m+a-1)/a) << nl;
    
    return 0;
}
// ✅ ceil(n/a) means:

//     Dividing n by a and rounding up to the nearest whole number.
//     Examples: ceil(1.5) = 2; ceil(2.0) = 2.

// ✅ (n + a - 1)/a:
 
//     This formula simulates ceil(n/a) using integer arithmetic only.
//     It avoids floating-point division, which helps prevent precision errors or overflow.
//     It’s safer and more efficient in competitive programming or when working with large numbers.
