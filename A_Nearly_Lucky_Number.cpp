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

    // int TestCase;
    // cin >> TestCase;

    // while(TestCase--)
    // {
        ll n; cin >>n;
    
        int cnt = 0;
        while(n > 0)
        {
            if( n % 10 == 7  || n % 10 == 4)    cnt++;
            n /= 10;
        }
        
        (cnt == 4 || cnt == 7 ) ? yes : no;
    // }

    return 0;
}
