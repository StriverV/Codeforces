
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define MOD 1000000007
using namespace std;

int main()
{
    Naba;

    ll k,n,w;
    cin >> k >> n >> w;

    ll m = 1, sum = 0;
    ll t = w;
    while(t--) 
    {
    
        sum += k*m;
        sum  %=  MOD;
        ++m;

    }  
    
    sum > n ? cout <<  sum - n << nl : cout << "0" << nl;

    return 0;
}
