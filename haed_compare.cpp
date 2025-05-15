
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

    ll a,b,c,d;
    cin >> a >> b >> c >> d;
   

    // log(a^b) = b * log(a) 
    long double x = b * log(a);    
    long double y = d * log(c);
    
 
    x > y ? yes : no;

    return 0;
}


