
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Naba;

    int n,k;
    cin >> n>>k;

    while(k--)    (n%10 != 0) ? n -= 1 :   n /= 10;

    cout << n << nl;

    return 0;
}
