#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
using namespace std;

ll fact (ll n)
{
    if (n == 0 || n == 1)  
        return 1;
    return n * fact(n-1);
}

int main()
{
    Naba;

    ll n,m;
    cin >> n >> m;
    
    cout << fact(min(n,m)) << nl;
 
    return 0;
}
