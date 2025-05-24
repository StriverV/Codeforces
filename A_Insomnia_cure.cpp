// https://codeforces.com/contest/148/problem/A
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Naba;

    int  k ,l,m,n, d;
    cin >> k >> l >> m >> n >> d;
    
    int damaged = 0;
    for(int i = 1; i <= d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0 )    damaged++;
    }
    
     cout << damaged << nl;

    return 0;
}