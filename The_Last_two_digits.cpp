
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define mod 1000000007
using namespace std;

int main()
{
    Naba;

 
    ll p = 1;
    for (int i = 0; i < 4; i++)
    {
        int x;  cin >> x;

        p *= x;
        p %= 100;
    }
    
 
    p < 10 ? cout << "0" << p << nl : cout << p << nl;

    return 0;
}


