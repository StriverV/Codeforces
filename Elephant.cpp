
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

    double n;
    cin >> n;

    if(n == 1 || n == 2 || n == 3 || n == 4 || n == 5) 
    {
        cout << "1" << nl;
    }

    else
    {
        cout << ceil(n/5) << nl;
    }
    return 0;
}
